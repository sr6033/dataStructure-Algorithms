//Program to print FIBONACCI SERIES of prime integers 
/* Fibonacci series-a series of numbers in which each number ( Fibonacci number ) is the sum of the two preceding numbers.
The simplest is the series 1, 1, 2, 3, 5, 8, etc. */
import java.util.*;
class Q24
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter number:");

		int n = sc.nextInt();
		int a = 0, b = 1, c = a+b;
		System.out.print("Prime terms: ");
		for(int i = 3; i <= n; i++)
		{
			if(isPrime(c))
				System.out.print(c + " ");
			a = b;
			b = c;
			c = a + b;
		}
		System.out.println();
		System.out.println("nth term: " + c);
	}

	public static boolean isPrime(int n)
	{
		int c=0;
		for(int i=1;i<=n;++i)
		{ if(n%i==0)
			c++;}
		if(c==2)
			return true;
		else
			return false;
	}
}
