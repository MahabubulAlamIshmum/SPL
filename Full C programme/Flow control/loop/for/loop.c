#include <stdio.h>

int main() {
    int n, i;

    printf("How many times do you want to write: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d. How are you..?\n", i);
    }

    return 0;
}
