#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        int marks=(3*x);
        int negative = (n-x)*(-1);
        int total=marks+negative;
        if(p<=total)
        cout<<"PASS"<<endl;
        else
        cout<<"FAIL"<<endl;
    }
}
