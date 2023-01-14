In C++ Approach1

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

	
Approach 2 in C++

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
