#include<stdio.h>
#include<stdlib.h>

void checkEven(int iNo)
{
  if((iNo % 2)==0)
    {
       printf("It is Even no");


    }
    else
    {
      printf("It is odd no");
    }
  
}
int main()
{
    int iValue=0;

    printf("Enter no :\n");
    scanf("%d",&iValue);

    
    checkEven(iValue);




    return EXIT_SUCCESS;
}