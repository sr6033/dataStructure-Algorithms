class Q17
{
	public static void main(String[] args)
	{
		for(int i = 2; i <= 1000; i++)
		{
			if(isPrime(i))
				System.out.print(i + " ");
		}
	}

	public static boolean isPrime(int n)
	{
		int i = 0;
		for(i = 2; i < n; i++)
			if(n % i == 0)
				break;

		if(i != n)
			return false;
		else
			return true;
	}
}