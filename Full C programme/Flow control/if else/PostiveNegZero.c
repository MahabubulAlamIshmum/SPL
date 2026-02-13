#include<stdio.h>
int main()
{
int num;
printf("Enter your number:");
scanf("%d",&num);

if(num>0){
    printf("%d is the Positive Number.",num);
}
else if(num<0){
    printf("%d is the Negative Number.",num);
}
else{
    printf("It's zero.",num);
}
return 0;
}
