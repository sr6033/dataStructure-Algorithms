import java.util.*;
class Q3
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.print("Enter the numbers: ");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int large = 0, small = 0;
		
		if(a > b)
		{
			if(a > c)
				large = a;
			else
				large = c;
		}
		else
		{
			if(b > c)
				large = b;
			else
				large = c;
		}
		
		if(a < b)
		{
			if(a < c)
				small = a;
			else
				small = c;
		}
		else
		{
			if(b < c)
				small = b;
			else
				small = c;
		}
		
		System.out.println("Largest = " + large);
		System.out.println("Smallest = " + large);
	}
}