import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Scanner.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        float y = sc.nextFloat();
        if((x %5==0) && (x + 0.50 <= y))
        {
            System.out.println(y - x - 0.50);
        }
        else System.out.println(y);
    }
}
