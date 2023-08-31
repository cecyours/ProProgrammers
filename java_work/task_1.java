import java.util.Scanner; 
class SR
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number :");
        int n1 = sc.nextInt();

      /*  System.out.print("Enter number : ");
        int n2 = sc.nextInt();*/

        if(n1%2==0)
        System.out.println(n1+" is even number ");

        else
        System.out.println(n1+" is odd number");
     
    }
}
