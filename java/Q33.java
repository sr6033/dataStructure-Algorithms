import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("<Enter size of 1st & then elements>");
		System.out.print("> ");

		int n = sc.nextInt();
		int m = sc.nextInt();
		int a[][] = new int[n][m];
		
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				a[i][j] = sc.nextInt();

		System.out.println("<Enter size of 2nd & then elements>");
		System.out.print("> ");

		int p = sc.nextInt();
		int q = sc.nextInt();
		int b[][] = new int[p][q];

		for(int i = 0; i < p; i++)
			for(int j = 0; j < q; j++)
				b[i][j] = sc.nextInt();

		if(m != p)
			System.out.println("Multiplication not possible.");
		else
		{
			int sum[][] = new int[n][q];

			int l = 0;
			int x = 0, y = 0;
			for(int i = 0; i < n; i++)
			{
				int k = 0, s = 0;
				while(y < q)
				{
					for(int j = 0; j < m; j++)
					{
						if(l < p)
							s += a[i][j] * b[l++][k];
					}

					k++;
				
					sum[x][y++] = s;
				}
					y = 0;
					x++;
			}

			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < q; j++)
					System.out.print(sum[i][j] + " ");
				System.out.println();	
			}
		}
	}
}