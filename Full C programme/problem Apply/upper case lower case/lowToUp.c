#include<stdio.h>
int main()
{
char lower;
printf("Enter any lower/small letter: ");
scanf("%c",&lower);
                    //we know a=97 A=65 difference=32
                    //b=98 B=66 difference=32
printf("The upper/capital letter: %c",lower-32);


return 0;
}
