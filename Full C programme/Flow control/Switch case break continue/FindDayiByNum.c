#include<stdio.h>
int main() {
    int daynumber;
    printf("Enter a number between(1-7) that represent a day of the week: ");
    scanf("%d", &daynumber);
    switch(daynumber){


    case 1:
        printf("Saturday\n");
        break;

    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;

     case 5:
        printf("Wednesday\n");
        break;

     case 6:
        printf("Thusday\n");
        break;

     case 7:
        printf("Friday\n");
        break;




    }


}

