//Rombosh shape.
#include<stdio.h>
int main()
{
  int row,col,k,n;

  printf("Enter your Number :");
  scanf("%d",&n);

  for(row=0; row<n; row++)
    {
      for(col=0; col<n-row-1; col++)
       {
        printf(" ");
       }
      for(k=0; k<n; k++)
       {
         printf("*");
        }
    printf("\n");
  }

return 0;
}

/*
    *****
   *****
  *****
 *****
*****

*/
