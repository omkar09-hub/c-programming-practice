//Check palindrome or not
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

bool CheckPalindrome(int iNo)
{
  int iDigit=0;
  int iRev=0;

  while(iNo!=0)
  {
      iDigit = iNo % 10;
      iRev=(iRev * 10) + iDigit;
      iNo =iNo / 10;
  }
   if(iNo == iRev)  //ISSUE
      {
        return true;
      }
      else
      {
        return false;
      }
 

  

}
int main()
{
    int iValue = 0;
    bool bRet=false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet=CheckPalindrome(iValue);
    if(bRet == true)
    {
        printf("no is palindrome");
    }
    else
    {
        printf("no is not palindrome");
    }

    
   
    return EXIT_SUCCESS;
}