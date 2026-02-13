//fibonacci series up to n terms.mane jeto porjonto bolbe toto porjono series dekhabe.
#include<stdio.h>
int main()
{
int n1=0,n2=1,fibo,n;

 printf("Enter the number of terms:");
 scanf("%d",&n); //joto input nibe toto ta cholbe.10 hole 10 bar 8 hole 8 bar amon

    fibo=n1+n2;
 printf("Fibonacci: %d %d ",n1,n2);

 for(int i=3; i<=n; i++){
    printf("%d ",fibo);
    n1=n2;
    n2=fibo;
    fibo=n1+n2;
 }


return 0;
}



//fibonacci series up a certain number.mane nirdisto number er ag porjonto series hobe number cross korbe na.
/*#include<stdio.h>
int main()
{
int n1=0,n2=1,fibo,n;

printf("Enter the number of terms:");
scanf("%d",&n);  // ai number er moddhe koyta fibo series ase oita show korbe but sobgula na.
                 // joto number input nibe toto porjonto cholbe
fibo=n1+n2;

printf("Fibonacci series:%d %d ",n1,n2);

for(int i=3; fibo<=n; i++){
    printf("%d ",fibo);
    n1=n2;
    n2=fibo;
    fibo=n1+n2;
}
return 0;
}
*/
