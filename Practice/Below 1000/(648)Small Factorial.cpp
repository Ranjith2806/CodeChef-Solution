#include<iostream>
#include<bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cpp_int count=1;
        for(int i=1;i<=n;i++)
        {
            count=count*i;
        }
        cout<<count<<endl;
    }
}
