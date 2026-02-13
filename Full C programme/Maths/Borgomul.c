//ax2+bx+c=0 where a b and c are real number and a!=0




#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c,dis,root1,root2,realpart,impart;

printf("Enter the value of a,b,c:");
scanf("%if %if %if", &a,&b,&c);

dis=b*b - 4*a*c;

if(dis>0){
    root1 = (-b+sqrt(dis))/(2*a);
    root2 = (-b-sqrt(dis))/(2*a);
   printf("root1: %lf and root2: %lf",root1,root2);

}
else if(dis==0){
    root1=root2= (-b)/(2*a);
    printf("root1: %lf and root2: %lf",root1,root2);
}
else{
    realpart=(-b)/(2*a);
    impart= (sqrt(-dis))/(2*a);
    printf("root1: %lf + %lfi, root2: %lf - %lfi", realpart,impart,realpart,impart);
}
return 0;
}
