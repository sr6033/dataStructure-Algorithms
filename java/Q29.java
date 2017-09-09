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
		int b[][] = new int[n][n];

		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
				a[i][j] = sc.nextInt();
		}

		int i = 1, row = 0, col = 0, drow = 0, dcol = 1;
		while(i <= n*n)
		{	
			i++;
			System.out.print(a[row][col] + " ");
			
			if(col + dcol == n || row + drow == n || col + dcol == -1 || b[row+drow][col+dcol] == 1)
			{
				int tmp = drow;
				drow = dcol;
				dcol = -tmp;
			}

			b[row][col] = 1;
			row += drow;
			col += dcol;
		}
	}
}