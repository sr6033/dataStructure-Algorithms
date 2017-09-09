import java.util.*;

class Q19
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter date(dd mm): ");

		int d = sc.nextInt();
		int m = sc.nextInt();

		if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			if(d <= 31)
				System.out.println("Valid date.");
			else
				System.out.println("Invalid date.");

		else
			if(m == 4 || m == 6 || m == 9 || m == 11)
				if(d <= 30)
					System.out.println("Valid date.");
				else
					System.out.println("Invalid date.");

		else
		{
			if(d <= 28)
				System.out.println("Valid date.");
			else
				System.out.println("Invalid date.");
		}
	}
}