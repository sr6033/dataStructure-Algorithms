import java.util.*;

class Q16
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the number: ");

		int n = sc.nextInt();

		for(int i = 0; i < n; i++)
		{
			for(int k = n; k > i; k--)
				System.out.print(" ");

			for(int j = 0; j <= i; j++)
				System.out.print(binomialCoeff(i, j) + " ");
			System.out.println();
		}
	}

	public static int binomialCoeff(int i, int j)
	{
		int coeff = 1;
		if(j > i-j)
			j = i-j;

		for(int k = 0; k < j; k++)
		{
			coeff *= i - k;
			coeff /= k + 1;
		}
		return coeff;
	}
}