#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue=0;

    printf("Enter no :\n");
    scanf("%d",&iValue);

    if((iValue %2)==0)
    {
       printf("It is Even no");


    }
    else
    {
      printf("It is odd no");
    }
  





    return EXIT_SUCCESS;
}