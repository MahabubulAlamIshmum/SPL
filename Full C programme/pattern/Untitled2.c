#include<stdio.h>
int main()
{
int n,k=0;
printf("Enter N for this pattern:");
scanf("%d",&n);

for(int i=1;i<n;i++)
    {
    for(int k=i; k<n-1; k++)
    printf(" ");
for(int k=i; k>=1; k--)
    printf("%d",k);
for(int k=2;k<=i; k++)
    printf("%d",k);
printf("\n");
}


return 0;
}

/*
   1
  212
 32123
4321234   */
