#include <stdio.h>

int main() {
    int x;
    printf("Tell me your Charge percentage of your phone: ");
    scanf("%d", &x);
    printf("Your phone is Now:%d%%\n",x);

    if (x == 100) {
        printf("Cool...\n");
        printf("Your phone has Full Charge!\n");
    }
    else if (x > 80 && x < 100) {
        printf("That Means....\n");
        printf("You have enough Charge!\n");
    }
    else if (x >= 16 && x <= 80) {
        printf("Use Carefully...\n");
        printf("Battery is in Normal Range.\n");
    }
    else if (x >= 6 && x <= 15) {
        printf("You Need to Turn on Battery Saver..\n");
        printf("Your phone is Now Low Battery!\n");
    }
    else if (x <= 5) {
        printf("Dammm...\n");
        printf("Your phone is OFF NOW!\n");
    }
    else {
        printf("Sorry.\n");
        printf("Invalid input! Please enter a valid percentage (0-100).\n");
    }

    return 0;
}
