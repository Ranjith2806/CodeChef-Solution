#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count_start=0,count_ltime=0;
        cin>>n;
        string str[n];
        while(n--)
        {
            cin>>str[n];
            if(str[n]=="START38")
            count_start++;
            else
            count_ltime++;
        }
        cout<<count_start<<' '<<count_ltime<<endl;
    }
}
