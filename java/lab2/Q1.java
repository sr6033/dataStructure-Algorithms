import java.util.*;
class Q1
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.print("Enter the numbers: ");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		
		System.out.println("a = " + a + " b = " + b); 
		int c = a;
		a = b;
		b = c;
		System.out.println("a = " + a + " b = " + b);
		
		a = a+b;
		b = a-b;
		a = a-b;
		System.out.println("a = " + a + " b = " + b); 
	}
}