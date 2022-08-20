import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int test =sc.nextInt();
		while(test-->0)
		{
		    int x=sc.nextInt();
		    int y=sc.nextInt();
		    int a=x*100;
		    int b=y*10;
		    if(a>=b)
		    {
		       System.out.println("Cloth"); 
		    }
		     else
		    System.out.println("Disposable");
		    
		}
	}
}
