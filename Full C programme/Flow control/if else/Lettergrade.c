/*#include<stdio.h>
int main()
{
    float marks;
    printf("Enter your marks:");
    scanf("%f",&marks);

   if(marks >=80)
        printf("Your Grade is A+");

   else if(marks >=70)
        printf("Your Grade is A");

   else if(marks >=60)
        printf("Your Grade is A-");

   else if(marks >=50)
        printf("Your Grade is B");

   else if(marks >=40)
        printf("Your Grade is C");

   else if(marks >=33)
        printf("Your Grade is D");

   else
        printf("Your Grade is F");



return 0;
}

*/

#include <stdio.h>

int main() {
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 80 && marks <= 100)
        printf("Your Grade is A+ and your Point is 4.00\n");

    else if (marks >= 70 && marks < 80)
        printf("Your Grade is A and your Point is 3.75\n");

    else if (marks >= 60 && marks < 70)
        printf("Your Grade is A- and your Point is 3.50\n");

    else if (marks >= 50 && marks < 60)
        printf("Your Grade is B and your Point is 3.00\n");

    else if (marks >= 40 && marks < 50)
        printf("Your Grade is C and your Point is 2.00\n");

    else if (marks >= 33 && marks < 40)
        printf("Your Grade is D and your Point is 1.00\n");

    else if (marks >= 0 && marks < 33)
        printf("Your Grade is F and your Point is 0.00\n");

    else
        printf("Invalid marks! Please enter a number between 0 and 100.\n");

    return 0;
}
