import java.util.*;
import java.lang.*;
import java.io.*;
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
            int d = sc.nextInt();
            if((a - c) < (b - d))
            {
                System.out.println("First");
            }
             else if((a - c) > (b - d))
            {
                System.out.println("Second");
            }
            else System.out.println("Any");
        }
    }
}



