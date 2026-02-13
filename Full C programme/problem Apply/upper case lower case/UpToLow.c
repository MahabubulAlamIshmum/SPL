#include<stdio.h>
int main()
{
char upper;
printf("Enter any upper/capital lower/small letter: ");
scanf("%c",&upper);
                    //we know a=97 A=65 difference=32
                    //b=98 B=66 difference=32
printf("The lower/small letter: %c",upper+32);


return 0;
}

