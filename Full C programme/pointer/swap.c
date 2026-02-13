//Just pointer diye swaping kora
/*#include<stdio.h>
int main()
{
  int x,y,temp;

     printf("Enter your 1st Number =",x);
        scanf("%d",&x);
     printf("Enter your 2nd Number =",y);
        scanf("%d",&y);

  int *ptr1,*ptr2;

  ptr1= &x;
  ptr2= &y;

//  swapping
  temp = *ptr1;
  *ptr1= *ptr2;
  *ptr2= temp;



   printf("Swaping Number is:\n");

   printf("1st is :%d\n",x);
   printf("2nd is :%d\n",y);

return 0;
}

*/

//Pointer and function diye swaping.
#include<stdio.h>

void swaping(int *ptr1, int *ptr2)//create a swap function
{
   int temp;

    temp=*ptr1;
   *ptr1=*ptr2;
   *ptr2=temp;

}

int main()
{
  int x,y;

  printf("Before swaping 1st number :");
  scanf("%d",&x);
  printf("Before swaping 2nd number :");
  scanf("%d",&y);


   swaping(&x,&y);
   printf("After swaping 1st number :%d\n",x);
   printf("After swaping 2nd number :%d\n",y);


return 0;
}
