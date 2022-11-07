#include <bits/stdc++.h>
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
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        int diff[n-1]={0};
        
        for(int i=1; i<n; i++)
        {
            diff[i-1]=arr[i]-arr[i-1];
        }
        
        int ans=1;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0; i<n-1; i++)
        {
            if(diff[i]<=2){
	            ans++;
	        }else{
	            if(ans<mn){
	                mn = ans;
	            }
	            if(ans>mx){
	                mx = ans;
	            }
	            ans=1;
	        }
	        
          
        }
       if(ans<mn){
	       mn =ans;
	    }
	    if(ans>mx){
	       mx = ans;
	    }
        cout<<mn<<" "<<mx<<endl;
        
        
    }

	return 0;
}
