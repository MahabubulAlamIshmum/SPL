


/*int multiplication(int arr[],int n){
int mul=1;
for(int i=0;i<n;i++){
    mul=mul*arr[i];
}
return mul;
}
int main(){
int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
    int m=multiplication(arr,n);
    printf("Multiplication of the array element:%d\n",m);
} */
     ///jei koyta input nibe then seikoyta number ke diye sum korbe/gun korbe jemon 3gun4gun2=24


/*#include<stdio.h>
int checkPrime(int x)
{
    int flag=1;
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}
void primeArray(int arr[],int n){
 for(int i=0;i<n;i++){
    int f=checkPrime(arr[i]);
    if(f==1)printf("%d is a prime\n",arr[i]);
    else
        printf("%d is not a prime\n",arr[i]);
 }
}
int main(){
int n;
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
primeArray(arr,n);
} */ ///jeikoyta input nibe seikoyta serially prime number check korbe
