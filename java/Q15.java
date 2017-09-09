class Q15
{
	public static void main(String[] args)
	{
		long i, f = 0, save = 0;
		for(i = 20; i < 10000000; i++)
		{
			save = f;
			f = fact(i);
			if(f <= 0)
				break;
		}
		System.out.println("The largest number: " + i);
	}

	public static long fact(long n)
	{
		long f = 1;
		for(long i = 2; i <= n; i++)
			f *= i;

		return f;
	}
}