#include<stdio.h>
int main()
{
int num,i,fact=1;

printf("Enter your Number:");
scanf("%d",&num);

for(i=1;i<=num;i++){
    fact= fact*i;

    printf("Factorial of %d: %d\n",num,fact);

}

return 0;
}
