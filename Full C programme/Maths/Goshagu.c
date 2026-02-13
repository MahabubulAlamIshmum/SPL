#include<stdio.h>
int main()
{
int num1,num2,Goshagu;

printf("Enter your Nmu1:");
scanf("%d",&num1);
printf("Enter your Nmu2:");
scanf("%d",&num2);

for(int i=1;i<=num1 && i<=num2; i++){
    if(num1%i==0 && num2%i==0){
        Goshagu=i;
    }
}
printf("Goshagu=%d",Goshagu);

return 0;
}
