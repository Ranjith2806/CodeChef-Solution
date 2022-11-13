#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    int k;
	    cin>>k;
	    int song=v[k-1];
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]==song)
	        cout<<i+1<<endl;
	    }
	}
}
