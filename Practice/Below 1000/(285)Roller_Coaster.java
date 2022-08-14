import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int X = sc.nextInt();
            int H = sc.nextInt();
            if( X >= H)
            {
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
    }
    
}
