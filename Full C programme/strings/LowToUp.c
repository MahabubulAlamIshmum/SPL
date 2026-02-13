///Basic
#include <stdio.h>
#include <string.h>

int main() {
    char lower[100];

    printf("Enter lowercase letters: ");
    scanf("%s", lower);  // akadhik character input nite %s use korechi

    printf("Uppercase letters: ");

    for (int i = 0; i < strlen(lower); i++) {
        if (lower[i] >= 'a' && lower[i] <= 'z') {
            printf("%c", lower[i] - 32);  // Lower to upper by ASCII
        } else {
            printf("%c", lower[i]);  // jodi lowercase na hoy bakita same thakbe
        }
    }

    printf("\n");
    return 0;
}

///Advance
/*#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a sentence (with lowercase, spaces, special chars):\n");
    fgets(str, sizeof(str), stdin);  // take a input with space

    printf("Modified output:\n");

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);  // making uppercase
        } else {

            printf("%c", str[i]);  // ja ase sob ager motoi thakbe
        }
    }

    return 0;
}
*/
