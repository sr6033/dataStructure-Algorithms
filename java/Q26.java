import java.util.*;

class main
{
	public static void main(String[] args)throws InputMismatchException //program to print sum of the integers in an array
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter size of array:");

		int n = sc.nextInt(), sum = 0;
		int a[] = new int[n];

		for(int i = 0; i < n; i++)
		{
			System.out.println(">> ");
			a[i] = sc.nextInt();
			sum += a[i];
		}
		
		System.out.println(sum);
	}

	
}
