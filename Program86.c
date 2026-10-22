#include<stdio.h>
#include<stdlib.h>

void ChechDivisible(int iNo)
{
    if(((iNo % 3)==0)&&((iNo % 5)==0))
    {
        printf("It is divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number :");
    scanf("%d",&iValue);

   ChechDivisible(iValue);

   return EXIT_SUCCESS;
   
}