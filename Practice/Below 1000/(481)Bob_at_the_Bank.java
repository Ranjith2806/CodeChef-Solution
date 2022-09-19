import java.util.*;
import java.io.*;
import java.lang.*;
class Codechef
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0;i<t;i++)
        {
            int w = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            int a = x-y;
            System.out.println((w+(a*z)));
        }
    }
}
