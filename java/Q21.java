import java.util.*;

class Q21
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("> ");
		int n = sc.nextInt();
		String s = "";

		while(n > 0)
		{
			int d = n%10;
			if(d == 0)
				s = " ZERO" + s;
			else
				if(d == 1)
					s = " ONE" + s;
			else
				if(d == 2)
					s = " TWO" + s;
			else
				if(d == 3)
					s = " THREE" + s;
			else
				if(d == 4)
					s = " FOUR" + s;
			else
				if(d == 5)
					s = " FIVE" + s;
			else
				if(d == 6)
					s = " SIX" + s;
			else
				if(d == 7)
					s = " SEVEN" + s;
			else
				if(d == 8)
					s = " EIGHT" + s;
			else
				if(d == 9)
					s = " NINE" + s;
			else;

			n = n/10;
		}

		System.out.println(s);
	}
}