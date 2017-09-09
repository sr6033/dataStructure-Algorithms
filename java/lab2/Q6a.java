import java.util.*;
class Sum10a
{
	public static void main(String[] args) throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		
		for(int i = 12; i <= n; i = i+10)
			sum += i;
		
		System.out.println(sum);
	}
}