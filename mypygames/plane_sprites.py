from telnetlib import GA
import pygame
import random

SCREEN_RECT = pygame.Rect(0, 0, 400, 700)

FRAME_PER_SEC = 60

CRATE_ENEMY_EVENT = pygame.USEREVENT

HERO_SHOOT_EVENT = pygame.USEREVENT+1


class GameSprite(pygame.sprite.Sprite):
    def __init__(self, image_name='./images/background.png', speed=1, speed2=1):
        super().__init__()
        self.image = pygame.image.load(image_name)
        self.rect = self.image.get_rect()
        self.speed = speed
        self.speed2 = speed2

    def update(self):
        self.rect.y += self.speed


class Background(GameSprite):
    def __init__(self, is_alt=False):
        super().__init__()
        if is_alt:
            self.rect.y = -self.rect.height

    def update(self):
        super().update()
        if self.rect.y > SCREEN_RECT.height:
            self.rect.y = -self.rect.height


class Enemy(GameSprite):
    def __init__(self):
        super().__init__("./images/enemy1.png")
        self.speed = random.randint(1, 6)
        self.rect.bottom = 0
        self.rect.x = random.randint(0, (SCREEN_RECT.width-self.rect.width))
        self.explode_index = 0

    def update(self):
        super().update()
        if self.rect.y >= SCREEN_RECT.height:
            self.kill()
        if self.explode_index == 5:
            return
        if self.explode_index != 0:
            new_rect = self.rect
            super().__init__("./images/enemy1_down%d.png" %
                             self.explode_index)
            self.explode_index += 1
            self.rect = new_rect

    def __del__(self):
        print("销毁敌机")


class Hero(GameSprite):
    def __init__(self):
        super().__init__("./images/me1.png")
        self.rect.x = SCREEN_RECT.width/2-self.rect.width/2
        self.rect.bottom = SCREEN_RECT.height-120
        self.speed = 0
        self.speed2 = 0
        self.bullets = pygame.sprite.Group()
        self.hero_bomb_index = 0
        self.clock = pygame.time.Clock()

    def update(self):
        self.rect.x += self.speed
        self.rect.y += self.speed2

        if self.rect.x < 0:
            self.rect.x = 0
        if self.rect.right > SCREEN_RECT.right:
            self.rect.right = SCREEN_RECT.right
        if self.rect.y < 0:
            self.rect.y = 0
        if self.rect.bottom > SCREEN_RECT.bottom:
            self.rect.bottom = SCREEN_RECT.bottom

        if self.hero_bomb_index == 5:
            return
        if self.hero_bomb_index != 0:
            new_h_rect = self.rect
            super().__init__("./images/me_destroy_%d.png" %
                             self.hero_bomb_index)
            self.hero_bomb_index += 1
            self.rect = new_h_rect

    def explode(self, screen):
        new_rect = self.rect
        for i in range(1, 4):
            self.clock.tick(20)
            super().__init__("./images/me_destroy_%d.png" % i)
            self.rect.centerx = new_rect.centerx
            self.rect.centery = new_rect.centery
            screen.blit(self.image, (self.rect.x, self.rect.y))
            pygame.display.update()

    def fire(self):
        for i in (0, 1, 2):
            bullet = Bullet()
            bullet.rect.centerx = self.rect.x
            bullet.rect.centery = self.rect.y-20
            self.bullets.add(bullet)


class Bullet(GameSprite):
    def __init__(self):
        super().__init__(
            "./images/bullet1.png", -3)

    def update(self):
        super().update()
        if self.rect.bottom < 0:
            self.kill()


class Enemy_Bomb(GameSprite):
    def __init__(self, x, y):
        super().__init__("./images/enemy1_down1.png", 0, 0)
        self.rect.centerx = x
        self.rect.centery = y
        self.explode_index = 0
        self.a = 0

    def update(self):
        pass
