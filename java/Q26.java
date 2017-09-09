import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

		int n = sc.nextInt(), sum = 0;
		int a[] = new int[n];

		for(int i = 0; i < n; i++)
		{
			System.out.print(">> ");
			a[i] = sc.nextInt();
			sum += a[i];
		}
		
		System.out.println(sum);
	}

	public static int isPrime(int n)
	{
		int c = 0;
		for(int i = 2; i < n; i++) 
		{
			if(n % i )	
		}
	}
}