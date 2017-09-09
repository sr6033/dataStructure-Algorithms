import java.util.*;

class Q10
{
	public static void main(String[] args)throws InputMismatchException
	{
		System.out.print("Enter the no. of terms: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		int a = 0, b = 1, c = a + b;
		System.out.print("Fibonacci Series: ");
		System.out.print(a + " " + b + " ");
		for(int i = 3; c <= n; i++)
		{
			System.out.print(c + " ");

			a = b;
			b = c;
			c = a + b;
		}

		System.out.println();

		a = 0; b = 1; c = 1; 
		int d = a + b + c;
		System.out.print("Tribonacci Series: ");
		System.out.print(a + " " + b + " " + c + " ");
		for(int i = 4; i <= n; i++)
		{
			System.out.print(d + " ");
			a = b;
			b = c;
			c = d;
			d = a + b + c;
		}
	}
}