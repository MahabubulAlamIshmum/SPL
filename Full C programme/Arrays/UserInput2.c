#include <stdio.h>

int main() {
    int n;

    printf("Enter how many numbers you want to input: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Input %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nYou entered:\n");

    for (int i = 0; i < n; i++) {
        printf("%d. %d\n", i + 1, numbers[i]);
    }

    return 0;
}


