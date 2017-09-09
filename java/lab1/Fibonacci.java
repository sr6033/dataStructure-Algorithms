import java.util.*;

class Fibonacci
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		int a = 1, b = 1, c = a + b;
		System.out.print(a + " " + b + " ");
		for(int i = 3; c <= n; i++)
		{
			System.out.print(c + " ");

			a = b;
			b = c;
			c = a + b;
		}	
	}
}