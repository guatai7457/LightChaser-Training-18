#include<stdio.h>
int main()
{
    int sum = 0;
    for(int i = 1;i < 100;i = i + 2)//表示遍历所有1-100的奇数
    {
        sum += i;
        //循环加上+= --> 常用的累加方法
    }
    printf("1-100的奇数和为：%d",sum);
    return 0;
}