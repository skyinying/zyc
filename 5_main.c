//202610112119
//郑宇辰
#include <stdio.h>

int main()

{
 printf("请输入数字：");

 float a;
 char op;
 float b;
 scanf("%f%c%f",&a,&op,&b);

 if(op=='/'&&b==0){
    printf("输出：错误：除数不能为0\n");
       }
 else if(op=='+'||op=='-'||op=='*'||op=='/){
     if(op=='+'){
        printf("输出:%.2f\n",a+b);
     }else if(op=='-'){
        printf("输出:%.2f\n",a-b);
     } else if(op=='/')
        printf("输出：%.2f\n",a/b);
       else 
        printf("输出:%.2f\n",a*b);
     }
 else
   printf("输出：错误：不支持的运算符");

return 0;
}
 

 
 




