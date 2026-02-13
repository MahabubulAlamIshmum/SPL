//fibonacci series up to n terms.mane jeto porjonto bolbe toto porjono series dekhabe.
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, fibo, n, count = 2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);  // joto input nibe toto ta cholbe. 10 hole 10 bar

    // Special cases
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    printf("Fibonacci: ");

    if (n >= 1) printf("%d ", n1);
    if (n >= 2) printf("%d ", n2);

    fibo = n1 + n2;

    while (count < n) {
        printf("%d ", fibo);
        n1 = n2;
        n2 = fibo;
        fibo = n1 + n2;
        count++;
    }

    return 0;
}

//fibonacci series up a certain number.mane nirdisto number er ag porjonto series hobe number cross korbe na.
/*#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, fibo, n;

    printf("Enter the limit number: ");
    scanf("%d", &n);  // এই সংখ্যার চেয়ে ছোট বা সমান যতগুলো ফিবোনাচ্চি সংখ্যা আছে, সেগুলো দেখাবে।

    printf("Fibonacci series: ");

    if (n >= 0) printf("%d ", n1); //ai 2 line likhleo hoy na likhleo hoy.
    if (n >= 1) printf("%d ", n2);

    fibo = n1 + n2;

    while (fibo <= n) {
        printf("%d ", fibo);
        n1 = n2;
        n2 = fibo;
        fibo = n1 + n2;
    }

    return 0;
}

*/
