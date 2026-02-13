#include<stdio.h>
int main()
{
  /*  for(int i=1; i<=10; i++){
        printf("%d\n",i); } */ /// 1theke 10porjonto print korar jonno for loop

      /*  int a,b;
        scanf("%d %d",&a,&b);
     while(a<=b){
        printf("%d\n",a);
        a++;} */

   /*  for(int i=2; i<20; i=i+2){
            printf("%d\n",i); }  */ ///even number

    /*  for(int i=1; i<20; i=i+2){
        printf("%d\n",i);} */ /// odd number

   /* int n; //problem :1
     scanf("%d",&n);
     for(int i=1; i<=n; i++){
    printf("%d\n",2*i-1);}  */ ///dhara user theke input jei koyta toto porjonto dhara


   /* int factrl=1,n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        factrl=factrl*i; }

      printf("%d\t",factrl); */ ///factorial ber korar jonno


 /*  int sum=0,n;
    scanf("%d",&n);

    for( int i=1; i<=n; i++){
        printf("%d\n",2*i-1);
        sum=sum+2*i-1; }
        printf("sum: %d",sum); */  ///jeto number input nibe toto number porjonto total sum korbe


 /*   int sum=0,n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum=sum-i;
            printf("%d\t",(-1)*i); }
        else{
            sum=sum+i;
            printf("%d\t",i); }
        }
    printf("\nsum:%d",sum); */ ///akta+ arekta- por por sum korar jonno


   /*   int n,sum=0,j=0;
      scanf("%d",&n);

      for(int i=1; i<=n; i++){
        j=j*10+9;
        sum=sum+j;
        printf("%d\n",j);
      }

    printf("\nsum:%d",sum);*/  ///jeto sonkha input nibo toto gula step by step nibe
                               ///  jemon 9
                                    ///   99
                                   ///    999
                                       ///9999


   /* int n,flag=0;
    scanf("%d\n",n);
    for(int i=2; i<n; i++){
        if(n%i==0)
            {
            flag=1;
            break;
        }
    }
if(flag==0)
    printf("prime");
else
    printf("Not prime"); */ ///code a aktu vul ase pore thik korte hobe



  /*   int n,i,j;
     scanf("%d",&n);

 for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        printf("%d",j);
    }
    printf("\n");
 } */ ///jei num input nibo sei num onujay colum row serial hobe =3
                                                              /// 123
                                                              /// 123
                                                              /// 123

  /*     int a,b,c;
       printf("Enter a,b and c :");
       scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c){
        printf("%d is the largest",a);

        if(b>c){
            printf("%d is the smallest\n",c);
        }
        else
            printf("\n%d is the smallest",b);
    }

    else if(b>=c && b>=a){
        printf("%d is largest",b);

        if(a>c){
            printf("\n%d is smallest",c);
        }
        else
            printf("\n%d is smallest\n",a);
    }
    else if(c>=b && c>=a){
        printf("%d is the largest",c);

        if(b>a){
            printf("\n%d is the smallest",a);
        }
        else
            printf("\n%d is smallest\n",b);} */ /// 3ta input nibe 3tar moddhe largest and smallest ber korbe


 /*int x,y,biyog;
    printf("Type your first number:");
    scanf("%d",&x);

    printf("Type your second number:");
    scanf("%d",&y);

    biyog=x+y;
    printf("Aitar jog number hoilo :%d",biyog); */   ///normal 2 ta number sum kora

/* int num1,num2;
    //int h=10;
    //char b='f';
    //printf("Inter your number:%d\n",h );
    // printf("Tell me your name:%c\n" ,b );

    printf("Enter the first number:");
    scanf("%d" ,&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    printf("sum=%d",num1+num2); */  ///normal 2 ta number sum kora

 /* int num1,num2,sum;


    printf("Type the first num:");
    scanf("%d",&num1);

    printf("Type the 2nd num:");
    scanf ("%d",&num2);

    sum=num1+num2;

    printf("The summation number is=%d\n",sum); */ /// Normally sum kora


/*  int num1, num2 ;
    printf("Enter the first number:");
    scanf("%d",&num1);

    printf("Enter the second number:");
    scanf("%d",&num2);

    if(num1>num2)
        { printf("First Number is the largest number &\n");
           printf("second Number is the lowest number"); }
    else{
        printf("Second Number is the largest number &\n");
        printf("First Number is the lowest number");
    }   */  ///largest and lowest number ber kora


 /*   int number;
    printf("Enter the number:");
    scanf("%d" ,&number);
    if(number%2==0){
        printf("The number is even");}

        else{
                printf("The number is odd");

        }  */ ///Even number and odd number check



  /*  int number ;
    printf("ENter the number:");
    scanf("%d" ,&number);
    if(number>0){
        printf("This is posive number");
        }
        else if(number==0){
            printf("The number is zero");
        }
        else{
            printf("This is negative number");
        }   */ ///Positive and Negative number check

 /* int num,i;
   printf("Enter the number:");
   scanf("%d",&num);
   for(i=1;i<=num;i++){
    if(i%2!=0){

        printf("1");
    }
    else{
    printf("0");}
   }  */
          ///jei number input nibe sei koyta 1,0 print korbe
            ///jemon 5=10101

/*    int num,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("Sum is %d", sum);

    */ ///jei intput nibe 1 theke suru kore toto porjonto sum korbe



/*	// integer variable
	int num = 5;

	printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
	printf("(float)num = %f\n", (float)num); */

	  /// C Program to demonstrate the use of operators



    return 0;
}
