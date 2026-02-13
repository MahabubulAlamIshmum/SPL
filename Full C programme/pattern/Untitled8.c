//Trivuz shape.
#include<stdio.h>
int main()
{
  int row,n;

  printf("Enter your Number :");
  scanf("%d",&n);

  for(row=1; row<=n; row++)
    {
      for(int j=1; j<=n-row; j++)
         {
           printf(" ");
               }
      for(int j=1; j<=row*2-1; j++)
         {
           printf("*");
               }
        printf("\n");
    }

return 0;
}

/*

   *
  ***
 *****
*******

*/
