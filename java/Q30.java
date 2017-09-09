import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

		int n = sc.nextInt();

		boolean prime[] = new boolean[n+1];
		for(int i = 0; i <= n; i++)
			prime[i] = true;

		for(int i = 2; i*i <= n; i++)
		{
			if(prime[i] == true)
			{
				for(int j = i*2; j <= n; j += i)
					prime[j] = false;
			}
		}

		for(int i = 2; i <= n; i++)
			if(prime[i] == true)
				System.out.print(i + " ");
	}
}