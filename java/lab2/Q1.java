import java.util.*;
class Q1
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.println("Enter the numbers: ");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();

		System.out.println("a = " + a + " b = " + b);
		//swapping using third variable
		int c = a;
		a = b;
		b = c;
		System.out.println("a = " + a + " b = " + b);
		//swapping without using third variable
		a = a+b;
		b = a-b;
		a = a-b;
		System.out.println("a = " + a + " b = " + b);
	}
}
