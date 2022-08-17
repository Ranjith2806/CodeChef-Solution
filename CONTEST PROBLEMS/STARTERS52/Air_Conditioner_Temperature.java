import java.util.*;
import java.io.*;
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
            if((a > b) || (b < c))
            {
                System.out.println("NO");
            }
            else System.out.println("YES");
        }
    }
}
