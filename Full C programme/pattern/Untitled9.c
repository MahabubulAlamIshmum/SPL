//Ulta Trivuz
#include<stdio.h>
int main()
{
     int row,n;

  printf("Enter your Number :");
  scanf("%d",&n);

  for(row=n; row>=1; row--)
    {
      for(int j=5-row; j>=1; j--)
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

 *******
  *****
   ***
    *

*/
