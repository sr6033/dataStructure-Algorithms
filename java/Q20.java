import java.util.*;

class Q20
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");

		int n = sc.nextInt();
		int sum_n = sum(n);

		int sum_fact = 0;

		for(int i = 2; i <= n;)
		{
			if(n % i == 0)
			{
				sum_fact += sum(i);
				n = n/i;
			}
			else
				i++;
		}

		//System.out.println(sum_n + " " + sum_fact);
		if(sum_fact == sum_n)
			System.out.println("Smith No.");
		else
			System.out.println("Not a Smith No.");
	}

	public static int sum(int n)
	{
		int sum = 0;
		while(n > 0)
		{
			sum += n%10;
			n = n/10;
		}
		return sum;
	}
}