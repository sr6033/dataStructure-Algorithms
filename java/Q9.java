import java.util.*;
class Q9
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.print("Enter a number: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		System.out.println("1. Count even digits.");
		System.out.println("2. Count odd digits.");
		System.out.print("Enter Choice: ");

		int ch = sc.nextInt(), count = 0;
		switch(ch)
		{
			case 1: while(n > 0)
					{
						int d = n % 10;
						if(d % 2 == 0)
							count++;

						n = n/10;
					}
					break;

			case 2: while(n > 0)
					{
						int d = n % 10;
						if(d % 2 != 0)
							count++;

						n = n/10;
					}
					break;

			default: System.out.println("Invalid Choice.");
					 System.exit(1);
		}

		System.out.println("Count = " + count);
	}
}