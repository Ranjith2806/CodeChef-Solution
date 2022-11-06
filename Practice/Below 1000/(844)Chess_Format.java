/*
  Given the time control of a chess match as a + ba+b, determine which format of chess out of the given 44 it belongs to.

1) Bullet if a + b \lt 3a+b<3
2) Blitz if 3 \leq a + b \leq 103≤a+b≤10
3) Rapid if 11 \leq a + b \leq 6011≤a+b≤60
4) Classical if 60 \lt a + b60<a+b

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains a single line of input, two integers a, ba,b.
Output Format
For each testcase, output in a single line, answer 11 for bullet, 22 for blitz, 33 for rapid, and 44 for classical format.*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int test = sc.nextInt();
		while(test-->0)
		{
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    System.out.println((a+b<3)?"1":(3 <= (a+b) && (a+b) <= 10)?"2":
		    (11 <= (a+b) && (a+b) <= 60)?"3":"4");
		}
	}
}
