/// Celcious to Fahrenheit

#include<stdio.h>
int main()
{
float celcious,Fahrenheit; // point man ase tai float nite hobe

printf("Enter a celcious : ");
scanf("%f",&celcious);

Fahrenheit= (celcious * 1.8) + 32;  //celcious theke fahrenheit a neyar sutro.
                                    // F = (c * 1.8) +32
printf("Fahrenheit= %.2f\n",Fahrenheit);

return 0;
}
