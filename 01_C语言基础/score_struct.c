#include <stdio.h>
typedef struct student
{
    char StdName[10];
    int score;
}std;//为了方便给结构体起了个简易的别名

int main()
{
    std a = {"Lunar",88};
    std b = {"MuvMuv",98};
    std c = {"Any",94};
    std d = {"Jewel",92}; 
    std score_list[4] = {a,b,c,d};//原本直接一个个打印感觉比较麻烦，在ai的引导下想到了循环可以减少手动重复的不便
    //但循环需要遍历下标，于是创建数组
    for(int i = 0;i <= 3;i++)
    {
        printf("Name:%s,Score:%d\n",score_list[i].StdName,score_list[i].score);
    }
    return 0;
}