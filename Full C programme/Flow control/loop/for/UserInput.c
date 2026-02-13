#include <stdio.h>

int main() {
    int n, input;

    printf("Enter your number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Input %d: ", i + 1);
        scanf("%d", &input);
        printf("You entered: %d\n", input);
    }

    return 0;
}

