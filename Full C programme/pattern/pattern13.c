#include<stdio.h>
int main()
{
    int p;
    int q;
    int r;

    printf("Enter number:");
    scanf("%d", &r);

    if (r % 2 == 0) {
        printf("Please enter an odd number for r.\n");
        return 1;
         }

    int k=r-1;


        for(p=1; p<=r; p++){
        for(q=1; q<=r; q++){
            if(q==1){
                printf("%d", p);
                }
            else if(q==r){
                printf("%d\n", k);
                k--;
            }
            else if(p==1||p==r){
                printf("+");
            }
            else if(p==(r+1)/2&&q==(r+1)/2){
                printf("*");
            }
            else{
                printf(" ");
    }
    }
    }
    }

/*   1+++4
     2   3
     3 * 2
     4   1
     5+++0
*/
