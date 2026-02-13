//Diamond shape.
#include<stdio.h>
int main()
{
  int row,n;

  printf("Enter your Number :");
  scanf("%d",&n);

  for(row=1; row<=n; row++)
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

 for(row=n-1; row>=1; row--)
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

    *
   ***
  *****
 *******
  *****
   ***
    *

*/

/*#include<stdio.h>
int main()
{
    int n, i, j,m=1,q,w,e,k;
    int r,t,y, p=1;
    printf("Enter your N odd number: ");
    scanf("%d",&n);
    q=n/2;
    w=q+1;
    e=w;
    e--;
    for(i=1; i<=w; i++){
        for(k=e;k>=1; k--){
            printf(" ");
        }
        for(j=1; j<=m; j++){
            printf("*");
        }
        m=m+2;
        e--;
        printf("\n");
    }
    n=n-2;
    for(t=1; t<=q; t++){
        for(y=1; y<=p; y++){
            printf(" ");

        }
        p++;
        for(r=1; r<=n;r++){
            printf("*");
        }
        printf("\n");
        n=n-2;
    }
}  */
