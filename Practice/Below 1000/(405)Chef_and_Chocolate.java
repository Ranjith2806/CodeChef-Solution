/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner input=new Scanner(System.in);
	    int testcase=input.nextInt();
	    while(testcase>0){
	        int x=(input.nextInt())*5;
	        int y=(input.nextInt())*10;
	        int totalchoclate=input.nextInt();
	        int calculation=((x+y)/totalchoclate);
	        System.out.println(calculation);
	        testcase--;
	    }
	}
}
