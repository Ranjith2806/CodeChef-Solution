#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        if((p%100)<=10-(p/100))
        cout<<((p%100)+(p/100))<<endl;
        else
        cout<<"-1"<<endl;
    }
}
