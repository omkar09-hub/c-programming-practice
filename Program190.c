#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int iCnt =0;

    for(iCnt=-iNo; iCnt <= 0;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }


    printf("\n");
}

//Time Complexity : 0(2N)

int main()
{
    int iValue = 0;

    printf("Enter Frequency :");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}