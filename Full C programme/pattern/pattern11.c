#include<stdio.h>
int main()
{
int x;
    printf("Enter your number:");// n=3
    scanf("%d",&x);
int y;
int z;
    for(y=1;y<=x;y=y+1){
    for(z=1;z<=x;z=z+1){
            if((y+z)%2==1){
              printf(" + ");
                          }
            else{
            printf(" * ");
                }
    }
    printf("\n");
    }
return 0;
}

/*   *  +  *
     +  *  +
     *  +  *

       */


