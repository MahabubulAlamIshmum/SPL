///Quadratic Equation
 //ax2+bx+c

/*#include<stdio.h>
int main()
{
double a,b,c,d,x1,x2;
printf("Enter a b c :");
scanf("%lf %lf %lf",&a, &b,&c);

d = sqrt(b*b-4*a*c);

x1 = (-b+d)/(2*a);
x2 = (-b-d)/(2*a);

printf("x1 = %lf\n",x1);
printf("x2 = %lf\n",x2);


return 0;
}
*/

///absolute value ba porom man ba modulus er man.
/*#include<stdio.h>
int main()
{
    int n,result;
    printf("Enter any negative Number:");
    scanf("%d",&n);

 result= abs(n); //abs is a library function
printf("%d",result);


return 0;
}
*/

///squre root ber kora.

/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    double result=sqrt(n); //sqrt is a library function
    printf("Squre of %d is = %.2lf",n,result);

return 0;
}
*/

///power ber kora.
/*#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a Number: ");
    scanf("%d",&n);

    printf("Enter a power: ");
    scanf("%d",&x);

    double result=pow(n,x); //pow is a library function
    printf("Power of %d is = %.2lf",n,result);

return 0;
}
*/

///log er man
#include<stdio.h>
int main()
{

double x,result;
printf("Enter a Number :");
scanf("%lf",&x);


result= log(x);
printf("log(%lf) = %lf\n",x,result);
return 0;
}
