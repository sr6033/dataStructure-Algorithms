import java.util.*;

class Q14
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("1. Find GCD");
		System.out.println("2. Find LCM");
		System.out.print("> ");
		int ch = sc.nextInt();

		System.out.print("Enter the numbers: ");
		int n = sc.nextInt();
		int m = sc.nextInt();

		switch(ch)
		{
			case 1: int s = gcd(n, m); 
					System.out.println("GCD: " + s);
					break;
			case 2: lcm(n, m); break;
		}
	}

	public static int gcd(int n, int m)
	{
		if(n == 0)
			return m;
		return gcd(m%n, n);
	}

	public static void lcm(int n, int m)
	{
		int large = (m > n)? m : n;
		int l = 1;
		for(int i = 2; i < large;)
		{
			if(m%i == 0)
			{
				if(n%i == 0)
				{
					l *= i;
					n = n/i;
					m = m/i;
				}
				else
				{
					l *= i;
					m = m/i;
				}
			}
			else
				if(n%i == 0)
				{
					if(m%i == 0)
					{
						l *= i;
						m = m/i;
						n = n/i;
					}
					else
					{
						l *= i;
						n = n/i;
					}
				}
			else
				i++;
		}

		System.out.println("LCM: " + l);
	}
}