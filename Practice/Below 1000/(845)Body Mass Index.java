import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-->0){
		    int m = sc.nextInt();
		    int h = sc.nextInt();
		    
		    int BMI = (m/(h*h));
		    
		    if(BMI<=18){
		        System.out.println("1");
		    }
		    else if(BMI>=19 && BMI<=24){
		        System.out.println("2");
		    }
		    else if(BMI>=25 && BMI<=29){
		        System.out.println("3");
		    }
		    else{
		        System.out.println("4");
		    }
		}
	}
}
