#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    printf("原来的a = %d,b = %d",a,b);
    int* p1 = &a;//此处将ab的地址赋值给了指针p1和p2
    int* p2 = &b;
    int t = a;
    * p1 = b;//此处将a，b的值通过中间变量t进行了交换
    //采用解引用的方式把值放入了对应指针指向的内存里
    * p2 = t;
    printf("交换后的a = %d,b = %d",a,b);
    return 0;
}