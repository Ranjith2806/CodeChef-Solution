import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int c = sc.nextInt();
		    float x = (a+b)/2;
		    float y = (b+c)/2;
		    float z = (a+c)/2;
		    if(x < 35 || y < 35 || z < 35 )
		    {
		        System.out.println("Fail");
		    }
		    else System.out.println("Pass");
		}
	}
}
