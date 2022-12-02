#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n],q[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>q[i];//p[i]=player 1 score,  q[i]=player 2 score;
    }
    int a,b,ans1=0,ans2=0,w,ans;
    for(int i=0;i<n;i++)
    {
        a+=p[i];
        b+=q[i];
        if(a>b)
        ans1=max(ans1,a-b);//if player 1 score is max then finding difference of scores between two players;
        else
        ans2=max(ans2,b-a);
        if(ans1>ans2)
        {
            w=1;//w for printing which player has higher score player 1 or 2;
            ans=ans1;
        }
        else
        {
            w=2;// w=2 if player 2 has higher score;
            ans=ans2;
        }
    }
    cout<<w<<' '<<ans;
}
