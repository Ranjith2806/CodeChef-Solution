/* package codechef; // don't place package name! */

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
	        int N = sc.nextInt();
		    int M = sc.nextInt();
		    int K = sc.nextInt();
		    if(N<=M*K)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
	}
}
