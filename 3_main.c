//202610112119
//郑宇辰
#include <stdio.h>

int main()
{
    printf("请分别写出三角形的3边:");

    float a;
    float b;
    float c;
    scanf("%f %f %f",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a)
       printf("能构成三角形\n");
    else
       printf("不能构成三角形\n");

return 0;
}
