#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1,int iNo2,int iNo3)
{
   if((iNo1 < iNo2) && (iNo1 < iNo3))
   {
     return iNo1;
   }
   else if ((iNo2 < iNo1) && (iNo2 < iNo3))
   {
     return iNo2;
   }
   else
   {
     return iNo3;
   }


}


int main()
{
    int iValue1=0,iValue2=0 ,iValue3=0;
    int iResult=0;

    printf("Enter First No :\n");
    scanf("%d",&iValue1);

    printf("Enter Second No :\n");
    scanf("%d",&iValue2);

     printf("Enter Third No :\n");
    scanf("%d",&iValue3);


    iResult=Minimum(iValue1,iValue2,iValue3);

    printf("Minimum no is :%d\n",iResult);

    return EXIT_SUCCESS;
}