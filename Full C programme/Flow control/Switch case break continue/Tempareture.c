#include<stdio.h>
int main()
{
  int choice;
  float temp,convertedTemp;

  printf("Tempareture conversion menu:\n");
  printf("1.Fahrenheit to Celcious\n");
  printf("2.Celcious to Fahrenheit\n");
  printf("Enter your choice :");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:
      {
      printf("Enter the Fahrenheit tempareture :");
      scanf("%f",&temp);
      convertedTemp = (temp-32)/1.8;
      printf("The tempareture in celcious is : %f\n",convertedTemp);
    break;
      }

    case 2:
        {
       printf("Enter the Celcious tempareture :");
       scanf("%f",&temp);
       convertedTemp = (1.8*temp)+32;
       printf("The tempareture in Fahrenheit is : %f\n",convertedTemp);
    break;
         }
    default:
        printf("Not a correct option.");


  }


return 0;
}

