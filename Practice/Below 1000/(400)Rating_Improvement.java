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
            int x = sc.nextInt();
            int y = sc.nextInt();
            if(y>=x && y<=(x + 200))
            {
                System.out.println("YES");
            }
             else System.out.println("NO");
        }
    }
}
