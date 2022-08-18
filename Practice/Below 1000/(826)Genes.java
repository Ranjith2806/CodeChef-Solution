import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner sc = new Scanner(System.in);
        char x = sc.next().charAt(0);
        char y = sc.next().charAt(0);
        if(x=='R' || y=='R'){
            System.out.println("R");
        }else if(x=='B' || y=='B'){
            System.out.println("B");
        }else{
            System.out.println("G");
        }
    }
}
