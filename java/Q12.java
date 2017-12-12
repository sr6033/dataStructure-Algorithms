import java.util.*;
import java.math.*;
class Q12
{
	public static void main(String[] args) throws InputMismatchException
	{
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the coefficients of ax^2 + bx + c: ");

		double a = sc.nextDouble();
		double b = sc.nextDouble();
		double c = sc.nextDouble();
		double d = b * b - 4 * a * c;
		if(d>0){
		double r1 = ( - b + Math.sqrt(d))/(2*a); 
		double r2 = ( - b - Math.sqrt(d))/(2*a);
		}
		System.out.println("Roots: " + r1 + ", " + r2);
	}
}
