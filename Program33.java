//Approach 1

import java.util.Scanner;
class Program33
{
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

        iResult=iValue1 + iValue2;   //Business Logic

        System.out.println("Addition is :"+ iResult);

    }
}