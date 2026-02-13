/*#include<stdio.h>
int main()
{
   int x=10,y=20,z=30;

     int *ptr;

      ptr =&x;
     printf("X= %d\n",*ptr);
      ptr =&y;
     printf("Y= %d\n",*ptr);
      ptr =&z;
     printf("Z= %d\n",*ptr);

return 0;
}

*/

//pointer diye duita valuer jogfol ber kora
/*#include<stdio.h>
int main()
{
  int x=20,y=10,sum,subt,add,div;

  int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    sum= *ptr1 + *ptr2;
    subt=*ptr1 - *ptr2;
   // mul= (*ptr1) *  (*ptr2);
    div=*ptr1 / *ptr2;

   printf("Sum =%d\n",sum);
   printf("Sub =%d\n",subt);
 //  printf("Mul =%d\n",mul);
   printf("Div =%d\n",div);


return 0;
}
*/

//Array with pointer.
/*#include<stdio.h>
int main()
{
  int a[5] = {10,20,30,40,50};
  int i,*ptr;

  ptr = &a[0];

  for(i=0; i<5; i++)
  {
      printf("%d\n",*ptr);
      ptr++;
  }

return 0;
}
*/
