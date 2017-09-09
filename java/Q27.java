import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("<Enter size and then elements>");
		System.out.print("> ");

		int n = sc.nextInt();
		int matrix[][] = new int[n][n];

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				matrix[i][j] = sc.nextInt();
		}

		if(determenant(matrix, n) == 0)
			System.out.println("Not invertible.");
		else
			System.out.println("Invertible");
	}

	public static int determenant(int m[][], int n)
	{
		int d = 0;

		if(n == 1)
			return m[0][0];

		int temp[][] = new int[n][n];
		int sign = 1;

		for(int i = 0; i < n; i++)
		{
			getCofactor(m, temp, 0, i, n);
			d += sign * m[0][i] * determenant(temp, n-1);

			sign *= -1;
		}

		return d;
	}

	public static void getCofactor(int m[][], int temp[][], int a, int b, int n)
	{
		int i = 0, j = 0;

		for(int row = 0; row < n; row++)
		{
			for(int col = 0; col < n; col++)
			{
				if(row != a && col != b)
				{
					temp[i][j++] = m[row][col];

					if(j == n-1)
					{
						j = 0;
						i++;
					}
				}
			}
		}
	}
}