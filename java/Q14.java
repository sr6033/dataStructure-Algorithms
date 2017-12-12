import java.util.*;

class Q14
{
	public static void main(String[] args)throws InputMismatchException
	{	
		Scanner sc = new Scanner(System.in);
		System.out.println("1. Find GCD");
		System.out.println("2. Find LCM");
		System.out.print("Enter your choice:");
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
		for(int i=1;i<=(n*m);++i)
		{ if((i%a==0)&&(i%b==0))
			{ System.out.println("LCM="+i);
			 break;
			}}
	}
}
