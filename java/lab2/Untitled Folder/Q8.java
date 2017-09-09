import java.util.*;

class Q8
{
	public static void main(String[] args)throws InputMismatchException
	{
		System.out.print("Enter the number: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println();
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