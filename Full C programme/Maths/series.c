///1 + 2 + 3 + ......+ N

/*#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the last number of the series :");
    scanf("%d",&n);

    printf("1+2+3+..... +%d\n",n);

    for(i=1; i<=n; i=i+1){
        sum = sum +i;
        printf("= %d\n",sum);
    }

return 0;
}
*/

///1 + 3 + 5 + .... + N

/*#include<stdio.h>
int main()
{
    int n,sum=0,a=1;
    printf("Enter the last Number :");
    scanf("%d",&n);

    printf("1 + 3 + 5 + .... + %d",n);

    while(a<=n)
    {
        sum = sum + a ;
        a=a+2;
    }

    printf(" = %d\n",sum);

return 0;
}
*/

///1*2 + 2*3 + 3*4 +.... + n1*n2

/*
#include<stdio.h>
int main()
{
int n1,n2,sum=0,a=1,b=2;
 printf("Enter n1 nad n2 :");
 scanf("%d %d",&n1,&n2);

 printf("1.2 + 2.3 + 3.4 +...+ %d.%d\n",n1,n2);

 while(a<=n1 && b<=n2) {
    sum =sum + a*b;
    a= a +1;
    b= b +1;
    printf("= %d\n",sum);
 }

return 0;
}
*/

///1.5 + 2.5 + 3.5 +....+n
/*#include<stdio.h>
int main()
{
float i,sum=0,n;
printf("Enter n =");
scanf("%f",&n);

for(i=1.5; i<=n; i++){
    sum = sum +i;
}
printf("Sum = %.1f\n",sum);
return 0;
}
*/

///1^2 + 2^2 + 3^2 +...+ n^2 ^mane square
 // 1 + 4 + 9 =14 aitai sum

/*#include<stdio.h>
int main()
{
int i,n,sum=0;

printf("Enter n = ");
scanf("%d",&n);

for(i=1; i<=n; i++){
    sum=sum + i*i;

      printf("Sum = %d\n",sum);

}

return 0;
}
*/

///1 + 1/2 + 1/3 +...+ 1/n

/*#include<stdio.h>
int main()
{
double i,n,sum=0;

printf("Enter n =");
scanf("%lf",&n);

for(i=1; i<=n; i++){
    sum=sum +(i/n);

    if(i==1)
        printf("\n1 + ");
    else if(i==n)
        printf("(1/%.2lf)",i);
    else
        printf("(1/%.2lf) + ",i);

}
printf("  sum = %.2lf\n",sum);

return 0;
}
*/

///1 X 2 X 3 X.....X N gun kora.

/*#include<stdio.h>
int main()
{
int n,i,multi=1;

printf("Enter N =");
scanf("%d",&n);

for(i=1; i<=n; i++){
    multi=multi*i;

    if(i==1)
        printf("\n1 * ");
    else if(i==n)
        printf("%d" ,i);
    else
        printf("%d * ",i);

}
printf("  Result = %d\n",multi);

return 0;
}
*/

///1^2 X 2^2 X 3^2 X...X n^2

/*#include<stdio.h>
int main()
{
int i,n,multi=1;

printf("Enter n = ");
scanf("%d",&n);

for(i=1; i<=n; i++){
    multi=multi * i*i;

     if(i==1)
        printf("\n1 * ");
    else if(i==n)
        printf("%d" ,i*i);
    else
        printf("%d * ",i*i);


}
   printf("  Result = %d\n",multi);


return 0;
}
*/

///SUM = 1-2+3-4+5-6....
//sum = (1+3+5+...)-(2+4+6+...)

#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0;
  printf("Enter the last term :");
  scanf("%d",&n);

    printf("1-2+3-4+.....%d\n",n);


  for(i=1; i<=n; i++){
    if(i%2==0)
      even = even + i;
    else
        odd = odd + i;
  }
  printf("Sum = %d\n",odd-even);

return 0;
}


