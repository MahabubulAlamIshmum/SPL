#include <stdio.h>

int main()
{
    int n = 5; // প্যাটার্নের লাইন সংখ্যা
    int i, j, k;

    for (i = 0; i < n; i++)
    {
        // স্পেস প্রিন্ট (n-i-1 বার)
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // তারকা (*) প্রিন্ট (i+1 বার)
        for (k = 0; k <= i; k++)
        {
            printf("*");
        }

        printf("\n"); // পরবর্তী লাইনে যাওয়া
    }

    return 0;
}
/*   *
    **
   ***
  ****
 *****    */


