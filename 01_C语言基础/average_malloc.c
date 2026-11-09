#include <stdio.h>
#include <stdlib.h>
double average(int* temp,int m)
{
    int sum = 0;
    for(int n = 0;n <= 4;n++)
    {
        sum += *(temp + n);
    }
    return (double)sum / m;
    //修正2：不要用int，会截断
}



int main() {
    int a[5] = {1,23,56,98,33};
    int* p = malloc(sizeof(a));
    if (p == NULL) return 1;//修正1：将没有调用成功可视化

    for(int i = 0;i <= 4;i++)
    {
        *(p + i) = a[i];
        //原先写了*p = a，错误在于p内存放的是int类型，而a是数组，这样没办法将整个数组放在开辟的堆内存空间内。
        //向ai询问后修正：用遍历将数组内一个个元素加进去
    }
    printf("平均值为：%.2lf",average(p,5));
    free(p);//不释放p会造成内存泄漏，内存泄漏是指函数运行结束时，堆内存既没法被释放也没法被访问，造成内存浪费
    return 0;
}