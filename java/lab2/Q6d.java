import java.util.*;
class Sum10d
{
	public static void main(String[] args) throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		double sum = 0, k = 2, j = 9;
		int p = 1;
		
		for(int i = 1; i <= n; i++, k = k+3, j = j+4)
		{
			sum += (k / j) * p;
			p *= -1;
		}
		System.out.println(sum);
	}
}