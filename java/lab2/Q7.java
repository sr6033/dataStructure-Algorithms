class Q6
{
	public static void main(String[] args)
	{
		for(int i = 1; i <= 1000; i++)
		{
			double f = 1;
			System.out.println("n = " + i);
			for(int j = 1; j <= i; j++)
				f = f*j;
			System.out.println("Factorial: " + f);
			for(int j = 1; j <= 10; j++)
				System.out.println(i + " x " + j + " = " + (i*j));
			System.out.println("----------------------------");		
		}
	}
}