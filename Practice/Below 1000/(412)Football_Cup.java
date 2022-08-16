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
             if(x==y&&x>0&&y>0)
            {
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
    }
}
