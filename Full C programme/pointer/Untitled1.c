
#include<stdio.h>
int main()
{
  int x=5;

  printf("Value of x= %d\n",x); //value print korar jonno just variable.
  printf("Address of x=%u\n",&x); //address ber korar jonno & use korte hoy
        //%d er jagay u o use kora jay just positive value dekhabe taile ar hexadecimal value chaile x

  int *ptr;
  ptr = &x;

    printf("%d\n",ptr);  //value ar address
    printf("%d\n",*ptr); //pointer address er value
    printf("%d\n",&ptr); //value ar address







return 0;
}
