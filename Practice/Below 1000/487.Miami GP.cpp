#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<((b<=(a*1.07))?"YES":"NO")<<endl;
    }
}
