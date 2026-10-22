import java.util.Scanner;
class Program27
{
    public static void main(String a[])
    {

        Scanner scanner=null;
        String sName=null;
        int iAge=0;
        float fMarks=0.0;           //Error

        scanner=new Scanner(System.in);

        System.out.println("Enter your Name :");
        sName=scanner.next();
        
        System.out.println("Enter your Age :");
        iAge=scanner.nextInt();

        System.out.println("Enter your Marks :");
        fMarks=scanner.nextfloat();

        System.out.println("Welcome "+sName);

        system.out.println("Your age is "+iAge);

        
        system.out.println("Your Marks is "+fMarks);

    }
}