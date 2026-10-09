/*
    Step 1:  Understand the problem statement
    Step 2:  Write the Algorithms
    Step 3:  Decide the programming language
    Step 4:  Write the program
    Step 5:  Test the program
*/

/////////////////////////////////////////////
//
// Step 1:  Understand the problem statement
//          User is going to enter any 2 integers 
//          And we have to perform Addition
//
////////////////////////////////////////////


/////////////////////////////////////////////
//
//Step 2:  Write the Algorithms
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create the variable as Ans to store the result
        Perform the addition and store into Ans
        Display the result from Ans
    END
*/
/////////////////////////////////////////////

/////////////////////////////////////////////
//
// Step 3:  Decide the programming language
//          we select c programming
//
/////////////////////////////////////////////

/////////////////////////////////////////////
//
// Step 4:  Write the program
//
/////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1,int iNo2)
{
    int iAns=0;

    iAns=iNo1+iNo2;             //Business logic
    return iAns;
}


int main()
{
   int iValue1=0, iValue2=0, iResult=0;

   printf("Enter first Number:\n");
   scanf("%d",&iValue1);

   printf("Enter second Number:\n");
   scanf("%d",&iValue2);

   iResult=Addition(iValue1,iValue2);
   

   printf("Addition is :%d\n",iResult);



    return 0;
}