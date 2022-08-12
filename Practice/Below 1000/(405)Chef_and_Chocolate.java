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
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            int a = ((x * 5) + (y * 10));
            int b = (a/z);
            System.out.println(b);
            
        }
    }
}
