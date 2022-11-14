#include <iostream>
using namespace std;
#define int long long
signed main() {
    int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int arr[x];int sum=0;
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	    }
	    for(int i=1;i<x;i++){
	        sum+=i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

