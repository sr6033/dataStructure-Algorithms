import java.util.*;

class Q22
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

		int n = sc.nextInt();
		int p = 1;

		for(int i = 2; i <= n; i++)
		{
			if(isPrime(i))
				p *= i;
		}

		System.out.println("Primorial: " + p);
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