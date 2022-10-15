#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    string c;
	    c=(x == y) ? "ANY" : ((x<y) ? "FIRST" : "SECOND");
	    cout<<c<<endl;
	}
	return 0;
}
