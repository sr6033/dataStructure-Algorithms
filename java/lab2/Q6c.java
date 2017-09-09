import java.util.*;
class Sum10c
{
	public static void main(String[] args) throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0, f = 0;
		
		for(int i = 1; i <= n; i++)
		{
			f = factorial(i);
			sum += f ; 
		}
		System.out.println(sum);
	}
	
	public static int factorial(int n)
	{
		int f = 1;
		for(int i = 1; i <= n; i++)
			f *= i;
		return f;
	}
}