#include <stdio.h>
int main()
{
    double a,b;//用double不用int的原因是：防止除法运算时出现精度丢失
    char op;
    printf("请输入表达式：\n");
    scanf("%lf %c %lf",&a,&op,&b);//scanf时要取地址
    //情况讨论用if，elseif
    if(op == '+')
    {
        printf("%lf + %lf = %lf\n",a,b,a+b);
    }
    else if(op == '-')
    {
        printf("%lf - %lf = %lf\n",a,b,a-b);
    }
    else if(op == '*')
    {
        printf("%lf * %lf = %lf\n",a,b,a*b);
    }
    else if(op == '/')
    {
       if(b == 0)
       {
        printf("除数不可以为0！");
    
       } 
        else
        {
            printf("%lf / %lf = %lf\n",a,b,a/b);
        }
    }
    return 0;
}
