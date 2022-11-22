#include<iostream>
#include<bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int min=INT_MAX,tempmin=0;
        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0;i<n-1;i++)
        {
            tempmin=abs(arr[i]-arr[i+1]);
            if(tempmin<min)
            {
                min=tempmin;
            }
        }
        cout<<min<<endl;
        
    }
}
