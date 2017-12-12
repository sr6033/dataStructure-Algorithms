import java.util.*;

class ArithmaticOper
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		Sysyem.out.println("Enter any 2  numbers");
		int a = sc.nextInt();
		int b = sc.nextInt();

		System.out.println("Sum = " + (a+b));
		System.out.println("Difference = " + (a-b));
		System.out.println("Product = " + (a*b));
		System.out.println("Division = " + (a/b));
		System.out.println("Reminder = " + (a%b));
	}
}
