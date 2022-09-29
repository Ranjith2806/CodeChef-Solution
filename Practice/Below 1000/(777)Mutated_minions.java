import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t =sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int count = 0;
        
                int[] a =new int[n];
		        for(int i=0;i<n;i++)
		        {
		            a[i]=sc.nextInt();
		            a[i] += k;
		            if(a[i]%7 == 0)count++;
                }
             System.out.println(count);
        }
    }
}
