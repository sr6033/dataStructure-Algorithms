import java.util.*;

class AreaCircle
{
	public static void main(String[] args)throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("enter the radius of circle:");
		int r = sc.nextInt();

		double area = 3.14 * r * r;
		double peri = 2 * 3.14 * r;

		System.out.println("Area = " + area);
		System.out.println("Perimeter = " + peri);
	}
}
