//202610112119
//郑宇辰
#include <stdio.h>

int main()
{
    float a;

    printf("请输入0到100的分数：");
    scanf("%f",&a);

    if(a<0||a>100)
      printf("输入无效");  
    else
      if(90<=a)
        printf("A\n");
    else
      if(80<=a)
        printf("B\n");
    else
      if(70<=a)
        printf("C\n");
    else
      if(60<=a)
        printf("D\n");
    else
        printf("E\n");

    return 0;
    

}
