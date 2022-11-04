#include<iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n= s.length();
        for(int i=0;i<n;i++)
        {
            if(s.substr(i,5)=="party")
            {
                s[i]='p';
                s[i+1]='a';
                s[i+2]='w';
                s[i+3]='r';
                s[i+4]='i';
            }
        }
        cout<<s<<endl;
    }
}
