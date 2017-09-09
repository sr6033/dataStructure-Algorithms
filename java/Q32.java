import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("<Enter size and then elements>");
		System.out.print("> ");

		int n = sc.nextInt();
		int a[][] = new int[n][n];

		System.out.println();
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				a[i][j] = sc.nextInt();

		for(int i = 0; i < n; i++)
			System.out.print(a[i][i] + " ");
		
		System.out.println();

		for(int i = 0; i < n; i++)
			System.out.print(a[i][n-i-1] + " ");
	}
}
