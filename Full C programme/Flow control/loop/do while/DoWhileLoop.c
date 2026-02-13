#include <stdio.h>

int main() {
    int n, i = 1;

    printf("How many times do you want to write: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive number.\n");
    } else {

        ///uporer ta na korleo hoy main do while loop aikhan theke suru.
        do {
            printf("%d. How are you..?\n", i);
            i++;
        } while(i <= n);
    }

    return 0;
}

