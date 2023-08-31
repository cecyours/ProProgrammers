import java.util.Scanner;
class Stuti
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter First number :-");
        int n1=sc.nextInt();

        System.out.print("Enter Second number :-");
        int n2=sc.nextInt();

        if(n1%n2==0)
        System.out.print(n1+" is divisble");
        else
        System.out.print(n1+" is not divisble");
    }
}