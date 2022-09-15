import java.io.*;
import java.util.*;
import java.lang.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i =0;i<t;i++)
        {
            int x = sc.nextInt();
            int p = sc.nextInt();
            int q = sc.nextInt();
            int r = p-q;
            int s = r*x;
            System.out.println(s);
        }
    }
}
