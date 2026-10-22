//Approach 2

import java.util.Scanner;
class Program34
{
    public int Addition (int iNo1,int iNo2)
    {
        int iAns=0;
        iAns=iNo1 + iNo2;
        return iAns;
    }


    public static void main(String a[])
    {

        Scanner scanner=null;
        int iValue1=0;
        int iValue2=0;
        int iResult=0;

        scanner=new Scanner(System.in);

        System.out.println("Enter First NO :");
        iValue1=scanner.nextInt();

        System.out.println("Enter Second NO :");
        iValue2=scanner.nextInt();

        iResult=Addition(iValue1,iValue2);    //ERROR

        System.out.println("Addition is :"+ iResult);

    }
}