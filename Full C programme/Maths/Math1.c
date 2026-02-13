///"Write a C program to find the roots of a quadratic equation of the form ax² + bx + c = 0 using the quadratic formula."
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;

    printf("Enter the value of a = ");
    scanf("%lf", &a);

    printf("Enter the value of b = ");
    scanf("%lf", &b);

    printf("Enter the value of c = ");
    scanf("%lf", &c);

    d = b * b - 4 * a * c; ///This calculates the discriminant.

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);     ///These calculate the two roots using the quadratic formula.
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Two real and distinct roots:\n");
        printf("Root 1 = %lf\n", root1);
        printf("Root 2 = %lf\n", root2);
    } else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Two real and equal roots:\n");
        printf("Root = %lf\n", root1);
    } else {
        double real = -b / (2 * a);
        double imag = sqrt(-d) / (2 * a);
        printf("Complex roots:\n");
        printf("Root 1 = %lf + %lfi\n", real, imag);
        printf("Root 2 = %lf - %lfi\n", real, imag);
    }

    return 0;
}
///formula
/*
Discriminant (D) = b² - 4ac

If D > 0 → Two real and distinct roots

If D = 0 → One real root (repeated)

If D < 0 → Complex roots (imaginary)

*/



/*#include<stdio.h>
int main()
{
    double a,b,c,d,root1,root2;
    printf("Enter the value of a=");
    scanf("%if" ,&a);

    printf("Enter the value of b=");
    scanf("%if" ,&b);

    printf("Enter the value of c=");
    scanf("%if" ,&c);

    d=b*b-4*a*c;

    root1=(-b+sqrt(d))/(2*a);
    root2=(-b-sqrt(d))/(2*a);

    printf("The root 1=%if",root1);
    printf("The root 2=%if",root2);

    return 0;
}
*/ ///aktu error ase

