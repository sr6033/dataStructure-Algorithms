import java.util.*;

class Q7
{
	public static void main(String[] args)throws InputMismatchException
	{
		System.out.print("Enter the number: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		System.out.println("1. Check Prime");
		System.out.println("2. Check Armstrong");
		System.out.println("3. Check Pallindrome");
		System.out.println("4. Check Perfect");
		System.out.println("5. Check Magic");
		System.out.print("Enter choice: ");
		
		int ch = sc.nextInt();
		
		if(ch == 1)
		{
			int i;
			for(i = 2; i < n; i++)
			{
				if(n % i == 0)
					break;
			}
			if(i == n)
				System.out.println(n + " is Prime Number");
			else
				System.out.println(n + " is Not a Prime Number");
		}
		else
			if(ch == 2)
			{
				int m = n, sum = 0;
				while(m > 0)
				{
					int d = m % 10;
					sum += d*d*d;
					m = m/10;
				}
				
				if(sum == n)
					System.out.println(n + " is Armstrong number");
				else
					System.out.println(n + " is not an Armstrong number");
			}
		else
			if(ch == 3)
			{
				int m = n, sum = 0;
				while(m > 0)
				{
					int d = m % 10;
					sum = sum*10 + d;
					m = m/10;
				}
				
				if(sum == n)
					System.out.println(n + " is Pallindrome");
				else
					System.out.println(n + " is not Pallindrome");
			}
		else
			if(ch == 4)
			{
				int sum = 0;
				for(int i = 1; i < n; i++)
				{
					if(n % i == 0)
						sum += i;
				}
				
				if(sum == n)
					System.out.println(n + " is a Perfect No.");
				else
					System.out.println(n + " is not a Perfect no.");
			}
		else
			if(ch == 5)
			{
				if(n % 5 == 0)
					System.out.println(n + " is a Magic number");
				else
					System.out.println(n + " is not a Magic number");
			}
		else
			System.out.println("Invalid Choice.");
	}
}