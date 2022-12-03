import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
		    int n=sc.nextInt();
		    int count=0;
		    for(int j=2;j<=n;j++)
		    {
		        if(n%j==0)
		        {
		            count+=1;
		        }
		    }
		    if(count==1)
		    {
		        System.out.println("yes");
		    }
		    else
		    {
		        System.out.println("no");
		    }
		}
	}
}


In C++ Approach1
/*
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
		if (n <= 1)
		return false;
    for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

    	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    isPrime(n) ? cout << "yes\n" :cout<<"no\n";
	}
}
*/
Approach 2 in C++
/*
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count==1)
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
}
*/
