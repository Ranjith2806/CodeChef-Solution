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
            System.out.println((Math.max(x,y)) - (Math.min(x,y)));
        }
    }
}