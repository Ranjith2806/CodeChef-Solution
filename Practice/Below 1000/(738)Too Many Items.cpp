#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        // if(n%10==0)
        // cout<<n/10<<endl;
        // else
        // cout<<((n/10)+1)<<endl;
        cout<<((n%10==0)?(n/10):((n/10)+1))<<endl;
    }
}
