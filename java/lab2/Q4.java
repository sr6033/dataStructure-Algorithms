import java.io.*;
class Q4
{
	public static void main(String[] args) throws IOException 
	{
         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
         char c = (char)br.read();
		if(c >= 65 && c <= 90)
			c += 32;
		 
		 if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			System.out.println(c + " is a vowel");
		else
			System.out.println(c + " is not a vowel");
	}
}