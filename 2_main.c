//202610112119
//郑宇辰
#include <stdio.h>

int main()
{
    printf("请输入一个实数：");

    float A;
    scanf("%f",&A);

    if(A<0)
        printf("负数\n");
    else
        if(A>0)printf("正数\n");
    else 
        printf("0\n");
    
   return 0;
}
