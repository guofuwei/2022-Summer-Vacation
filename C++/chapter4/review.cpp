#include <iostream>
#include <array>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char actor[30];
    short besite[30];
    float chuck[13];
    long double dipsea[64];

    array<char, 30> actor;
    array<short, 30> besite;
    array<float, 13> chuck;
    array<long double, 64> dipsea;

    int test_array1[] = {1, 3, 5, 7, 9};
    float ideas[10];
    ideas[1];
    char chstr[20] = "cheeseburger";
    string str = "Waldorf Salad";

    struct Fish
    {
        string type;
        int weight;
        double length;
    };
    Fish fish_test = {
        "黑鱼",
        18,
        1.34};
    enum Response
    {
        No,
        Yes,
        Maybe
    };
    double ted;
    double *p_ted = &ted;
    *p_ted = 10;

    float treacle[10];
    float *p_treacle = treacle;
    *p_treacle = 10;
    p_treacle[9] = 10;

    int num;
    cout << "Please input the num of array:";
    cin >> num;
    int *new_array = new int[num];
    vector<int> vector_array(num);

    // 14.打印出该字符串的储存地址

    Fish *test_fish2 = new Fish;
    test_fish2->type = "鳜鱼";
    test_fish2->length = 10;
    test_fish2->weight = 20;
    // cin将空格和换行作为输入的结束标志符且不会删除最后输入的回车符号
    const int kNum = 10;
    std::vector<std::string> vetcor_array2(kNum);
    std::array<std::string, kNum> array_test;
    
}
