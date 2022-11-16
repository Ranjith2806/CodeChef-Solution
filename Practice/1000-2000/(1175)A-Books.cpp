#include <iostream>
using namespace std;
int main(){
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i!=n-1)
	        {
	            int t=0;
	            for(int j=i+1;j<n;j++)
	            if(a[i]<a[j])
	            t++;
	            b[i]=t;
	        }
	        else
	        b[i]=0;
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
}
