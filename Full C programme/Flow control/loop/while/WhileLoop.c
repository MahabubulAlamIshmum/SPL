#include <stdio.h>

int main() {
    int n, i = 1;

    printf("How many times do you want to write: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("%d. How are you..?\n", i);
        i++;
    }

    return 0;
}

