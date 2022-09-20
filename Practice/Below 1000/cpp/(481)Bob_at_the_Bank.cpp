#include <iostream>
using namespace std;
int main()
{
    int t,w,x,y,z;
    cin>>t;
    while(t--)
    {
        cin>>w>>x>>y>>z;
        cout<<(w+(x-y)*z)<<endl;
    }
    return 0;
}
