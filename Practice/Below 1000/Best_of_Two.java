import java.util.*;
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
            if(a > b)
            {
                System.out.println(a);
            }
            else System.out.println(b);
        }
    }
}
