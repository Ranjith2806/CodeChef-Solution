#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
//         if(x%3==0)
//         cout<<"NORMAL"<<endl;
//         else if((x+1)%3==0)
//         cout<<"SMALL"<<endl;
//         else
//         cout<<"HUGE"<<endl;
        cout<<((x%3==0)? "NORMAL":((x+1)%3==0)? "SMALL":"HUGE")<<endl;;
    }
}
