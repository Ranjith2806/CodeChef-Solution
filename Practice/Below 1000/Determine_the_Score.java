import java.util.*;
class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc= new Scanner(System.in);
        int test = sc.nextInt();
        while(test-->0)
        {
            int A = sc.nextInt();
            int B = sc.nextInt();
            int C = (A/10);
            int D =(C * B);
            System.out.println(D);
        }
    }
}


C++ Solution

#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int a,b,c,d;
	    cin>>a>>b;
	    cout<<((a/10)*b)<<endl;
	}
	return 0;
}
