#include<stdio.h>
#include<stdlib.h>

void CheckPerfect(int iNo)
{
    int iCnt=0 , iSum=0;

    for(iCnt =1 ; iCnt <= iNo/2 ; iCnt++)   
    {
        if((iNo%iCnt)==0)
        {
           iSum=iSum + iCnt;
        }

    }
    if(iSum == iNo)
    {
        printf("It is perfect no\n");
    }
    else{
        printf("it is not perfect no\n");
    }
}



int main()
{
    int iValue=0 ;
    

    printf("Enter number :");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return EXIT_SUCCESS;
}

//Time Complexity : O(N/2)