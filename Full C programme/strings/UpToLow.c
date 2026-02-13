///Basic
#include <stdio.h>
#include <string.h>

int main() {
    char upper[100];

    printf("Enter uppercase letters: ");
    scanf("%s", upper);  // ekadhik character input nite %s use korechi

    printf("Lowercase letters: ");

    for (int i = 0; i < strlen(upper); i++) {
        if (upper[i] >= 'A' && upper[i] <= 'Z') {
            printf("%c", upper[i] + 32);  // Upper to lower by ASCII
        } else {
            printf("%c", upper[i]);  // jodi uppercase na hoy tahole ja ase tai thakbe
        }
    }

    printf("\n");
    return 0;
}
///Advance 
/*#include <stdio.h>

int main() {
    char str[200];

    printf("Enter a sentence (with spaces and special chars):");
    fgets(str, sizeof(str), stdin);  // space line input ney

    printf("Modified output:\n");

    for (int i = 0; str[i] != '\0'; i++) {
        // just uppercase hole low case a convert kroe
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        } else {

            printf("%c", str[i]); // baki jeta jemon ase thik temon e print kore
        }
    }

    return 0;
}
*/