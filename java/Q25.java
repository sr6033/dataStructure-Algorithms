import java.util.*;

class Q25
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

		int n = sc.nextInt();

		for(int i = 1; i <= 10; i++)
			System.out.println(n + " x " + i + " = " + (n*i) + " | factorial: " + fact(n*i));
	}

	public static int fact(int n)
	{
		int f = 1;
		for(int i = 2; i <= n; i++)
			f *= i;

		return f;
	}
}