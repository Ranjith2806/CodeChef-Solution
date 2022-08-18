import java.io.*;
import java.util.*;
import java.lang.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = a + b + c;
            if(d>=100 && a>=10&&b>=10&&c>=10)
            {
                System.out.println("PASS");
            }
             else System.out.println("FAIL");
        }
    }
}
