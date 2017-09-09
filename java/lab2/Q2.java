import java.util.*;
class Q2
{
	public static void main(String[] args) throws InputMismatchException
	{
		System.out.print("Enter the sides: ");
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		
		System.out.println("1. Check Equilateral");
		System.out.println("2. Check Isosceles");
		System.out.println("3. Check Scaline");
		System.out.println("4. Check Right angled");
		System.out.print("Enter choice: ");
		int ch = sc.nextInt();
		
		if(a+b > c && a+c > b && b+c > a)
		{
			System.out.println("Triangle is valid.");
			if(ch == 1)
			{
				if(a == b && b == c && c == a)
					System.out.println("Triangle is Equilateral");
				else
					System.out.println("Triangle is not Equilateral");
			}
			else
				if(ch == 2)
				{
					if(a == b || b == c || a == c)
						System.out.println("Triangle is Iscoceles");
					else
						System.out.println("Triangle is not Iscoceles");
				}
			else
				if(ch == 3)
				{
					if(a != b && a != c && b != c)
						System.out.println("Triangle is Scaline");
					else
						System.out.println("Triangle is not scaline");
				}
			else
				if(ch == 4)
				{
					if((a*a + b*b) == (c*c) || (c*c + b*b) == (a*a) || (a*a + c*c) == (b*b))
						System.out.println("Triangle is Right angled");
					else
						System.out.println("Triangle is not right angled");
				}
			else
				System.out.println("Invalid choice.");
		}
		else
		{
			System.out.println("Triangle is invalid");
			System.exit(1);
		}
	}
}