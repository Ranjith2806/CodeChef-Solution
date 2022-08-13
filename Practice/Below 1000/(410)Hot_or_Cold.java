import java.io.*;
import java.lang.*;
import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int c = sc.nextInt();
            if( c > 20)
            {
                System.out.println("HOT");
            }
            else System.out.println("COLD");
        }
    }
}
