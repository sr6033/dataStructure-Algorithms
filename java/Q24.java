import java.util.*;

class Q24
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

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
		int i = 0;
		for(i = 2; i < n; i++)
			if(n % i == 0)
				break;

		if(i != n)
			return false;
		else
			return true;
	}
}