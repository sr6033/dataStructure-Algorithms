import java.util.*;
class Q5
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.print("Enter the number: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		int f = 1;
		for(int j = 1; j <= n; j++)
			f *= j;
		System.out.println("Factorial: " + f);
		for(int j = 1; j <= 10; j++)
			System.out.println(n + " x " + j + " = " + (n*j));	
	}
}