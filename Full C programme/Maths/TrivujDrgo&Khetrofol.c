///Trivujer 3 bahur dhorgho and khetrofol ninnoy

#include<stdio.h>
int main()
{
double a,b,c,s,area;

 printf("Enter 3 values : ");
 scanf("%lf %lf %lf",&a,&b,&c);

 s=(a+b+c)/2; //jekhane s er man avabe ber kore.
 area= sqrt(s*(s-a)*(s-b)*(s-c)); //Trivujer khetrofol ninnoyer main ruls.

 printf("Area of triangle = %.2lf\n",area);

return 0;
}
