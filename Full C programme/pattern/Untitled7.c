//Square shape.
#include<stdio.h>
int main()
{
   int row,col,n;

  printf("Enter your Number :");
  scanf("%d",&n);

  for(row=0; row<n; row++)
    {
      for(col=0; col<n; col++)
        {
          if(row>0 && row<n-1 && col>0 && col<n-1)
            {
              printf(" ");
                }
          else
           {
             printf("*");
                }
        }
      printf("\n");
    }

return 0;
}
/*

*****
*   *
*   *
*   *
*****

*/
