import java.util.*;
class Sum10b
{
	public static void main(String[] args) throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0, p = 1;
		
		for(int i = 1; i <= n; i++)
		{
			sum += i * p;
			p *= -1; 
		}
		System.out.println(sum);
	}
}