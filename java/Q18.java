import java.util.*;

class Q18
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter x & y of the point: ");

		int x = sc.nextInt();
		int y = sc.nextInt();

		System.out.println("Enter the x & y of the center: ");
		int x0 = sc.nextInt();
		int y0 = sc.nextInt();

		System.out.println("Enter the radius: ");
		double r = sc.nextDouble();

		double d = ((x-x0)*(x-x0)) + ((y - y0)*(y - y0));
		d = Math.sqrt(d);
		if(r==d)
			System.out.println("the point lies on the circle.");
		if(r > d)
			System.out.println("The point lies within the circle.");
		else
			System.out.println("The point lies outside the circle.");
	}
}
