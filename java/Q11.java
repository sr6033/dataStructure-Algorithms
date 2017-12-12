import java.util.*;
class Q9
{
	public static void main(String[] args) throws InputMismatchException
	{	System.out.println("Enter no of terms:");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println("Enter choice");
		System.out.println("1. Display odd divisors");
		System.out.println("2. Display even divisors");
		
		int ch = sc.nextInt();
		System.out.println();
		for(int i = 1; i < n; i++)
		{
			if(n % i == 0)
			{	switch(ch)
			       {case 1:	
					if(i % 2 != 0)
						System.out.print(i + " ");
					break;
				
				case 2:
					if(i % 2 == 0)
						System.out.print(i + " ");
					break;
			}}
		}
		System.out.println();
	}
}
