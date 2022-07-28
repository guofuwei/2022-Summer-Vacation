import random
import pygame
from plane_sprites import *
j = []
bomb_index = 0


class PlaneGame(object):
    def __init__(self):
        print("游戏初始化")
        self.screen = pygame.display.set_mode(SCREEN_RECT.size)
        self.clock = pygame.time.Clock()
        self.__create_sprites()

        pygame.time.set_timer(CRATE_ENEMY_EVENT, 500)
        pygame.time.set_timer(HERO_SHOOT_EVENT, 500)

    def __create_sprites(self):
        bg1 = Background()
        bg2 = Background(True)
        self.back_group = pygame.sprite.Group(bg1, bg2)
        self.enemy_group = pygame.sprite.Group()
        self.hero = Hero()
        self.hero_group = pygame.sprite.Group(self.hero)
        self.bomb_group = pygame.sprite.Group()
        self.hero_bomb_group = pygame.sprite.Group()

    def start_game(self):
        print("游戏开始")
        while True:
            self.clock.tick(FRAME_PER_SEC)
            self.__event_handler()
            self.__check_collide()
            self.__update_sprites()
            pygame.display.update()

    def __event_handler(self):
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                PlaneGame.__game_over()
            elif event.type == CRATE_ENEMY_EVENT:
                self.enemy = Enemy()
                self.enemy_group.add(self.enemy)
            elif event.type == pygame.KEYDOWN or pygame.K_SPACE:
                self.hero.fire()
        key_pressed = pygame.key.get_pressed()
        if key_pressed[pygame.K_LEFT]:
            self.hero.speed = -3
        elif key_pressed[pygame.K_RIGHT]:
            self.hero.speed = 3
        elif key_pressed[pygame.K_UP]:
            self.hero.speed2 = -3
        elif key_pressed[pygame.K_DOWN]:
            self.hero.speed2 = 3
        else:
            self.hero.speed = 0
            self.hero.speed2 = 0

    def __check_collide(self):
        bomb_enemies = pygame.sprite.groupcollide(
            self.enemy_group, self.hero.bullets, False, True)
        self.bomb_group.add(bomb_enemies)
        for enemy1 in self.bomb_group:
            if enemy1.explode_index == 0:
                enemy1.explode_index = 1
            elif enemy1.explode_index == 5:
                self.enemy_group.remove_internal(enemy1)
                self.bomb_group.remove_internal(enemy1)

        enemies = pygame.sprite.spritecollide(
            self.hero, self.enemy_group, True)
        if len(enemies) > 0:
            self.hero.explode(self.screen)
            self.hero.kill()
            PlaneGame.__game_over()

    def __update_sprites(self):
        self.back_group.update()
        self.back_group.draw(self.screen)
        self.enemy_group.update()
        self.enemy_group.draw(self.screen)
        self.hero_group.update()
        self.hero_group.draw(self.screen)
        self.hero.bullets.update()
        self.hero.bullets.draw(self.screen)

    @staticmethod
    def __game_over():
        print("游戏结束")
        pygame.quit()
        exit()


if __name__ == "__main__":
    game = PlaneGame()
    game.start_game()
