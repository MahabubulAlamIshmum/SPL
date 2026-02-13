#include<stdio.h>
int main()
{
char x;

printf("Enter your letter:");
scanf("%c",&x);

if(x == 'a'|| x == 'e' || x == 'i' || x == 'o' || x == 'u'){
    printf("%c is a vouwel",x);
}
else if(x == 'A'|| x == 'E' || x == 'I' || x == 'O' || x == 'U'){
printf("%c is a vouwel",x);
}

else{
    printf("%c is a consonant",x);
}
return 0;
}
