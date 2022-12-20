//APPROACH 1:

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        if(k%2==0)
        cout<<k<<endl;
        else
        cout<<k+2<<endl;
    }
}
//TIME COMPLEXITY:-O(1)
  
  
  
  
//APPROACH 2:

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,final=0;
        cin>>k;
        for(int i=1;i<=k;i++)
        {
            if(i%2!=0)
            final+=3;
            else
            final-=1;
        }
        cout<<final<<endl;
    }
}

//TIME COMPLEXITY:-O(n)
