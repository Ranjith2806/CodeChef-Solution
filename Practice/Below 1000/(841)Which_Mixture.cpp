#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        string c;
        c = (((a>0) && (b>0)) ? "Solution" :(a==0) ? "Liquid":"Solid");
        cout<<c<<endl;
    }
}
