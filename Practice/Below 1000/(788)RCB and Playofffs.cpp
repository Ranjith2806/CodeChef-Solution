#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int x, y , z;
	    cin >> x;
	    cin >> y;
	    cin >> z;
	    if(y-x<=2*z)
	    {
	        cout << "yes" << endl;
	    }
	    else
	    {
	        cout << "no" << endl;
	    }
	}
	return 0;
}
