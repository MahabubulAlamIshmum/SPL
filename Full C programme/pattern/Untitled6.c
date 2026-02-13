//Plus shape.
#include<stdio.h>
int main()
{
   int row,col,n;

  printf("Enter your Any Odd Number :");
  scanf("%d",&n);

  for(row=1; row<=n; row++)
    {
     if(row==((n/2)+1))
        {
         for(col=1; col<=n; col++)
           {
            printf("*");
           }
        }

    else
        {
          for(col=1; col<=n/2; col++)
             {
             printf(" ");
                }
            printf("*");
             }
       printf("\n");
               }

return 0;
}

/*

  *
  *
*****
  *
  *

*/
