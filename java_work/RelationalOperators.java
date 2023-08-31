
import java.util.Scanner;
class RO{
    
    public static void main(String s[])
    {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a number : ");
        int n1 = sc.nextInt();

        System.out.print("Enter a number : ");
        int n2 = sc.nextInt();

        // n%2==0
        
        if(n1>n2)
            System.out.println(n1+" is greater than "+n2);
        else
            System.out.println(n2+" is greater than "+n1);

    }
}