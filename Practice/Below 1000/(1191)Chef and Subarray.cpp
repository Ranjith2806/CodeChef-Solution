#include <iostream>
using namespace std;
int c=0,a,n,i,m=0;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a!=0)
        {
            c++;
        }
        else
        {
            if(c>m)
            m=c;
            c=0;
        }
    }
    if(c>m)
    m=c;
    cout<<m;
    return 0;
}
