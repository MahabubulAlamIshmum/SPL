///Swip NUmber

#include<stdio.h>
int main()
{
 int num1,num2;
 printf("Enter your 1st Number :");
 scanf("%d",&num1);
 printf("Enter your 2nd Number :");
 scanf("%d",&num2);

 int temp;

 temp=num1; //temp =1st num;
 num1=num2; //num1 =2nd num;
 num2=temp; //num2 =temp;

 printf("Swip Result\n 1st Number = %d\n",num1);
 printf(" 2nd Number = %d\n",num2);

return 0;
}



/*jodi temp veriable bade swip korte chai tobe
           num1=num1-num2;
           num2=num1+num2;
           num1=num2-num1; */

