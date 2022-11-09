#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,r;
        cin>>s>>r;
        int countOneForS=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0')
            countOneForS++;
        }
        int countOneForR=0;
        for(int i=0;i<r.length();i++)
        {
            if(r[i] == '0')
            countOneForR++;
        }
        if(countOneForS == countOneForR)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
