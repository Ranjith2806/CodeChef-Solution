#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,less,larger,boast=0;
        cin>>n;
        int score[n];
        for(int i=0;i<n;i++)
        {
            cin>>score[i];
        }
        for(int i=0;i<n;i++)
        {
            less=0;
            larger=0;
            for(int j=0;j<n;j++)
            {
                if(score[i] >= score[j])
                {
                    less++;
                }
                else
                {
                    larger++;
                }
            }
            if(less > larger)
            boast++;
        }
        cout<<boast<<endl;
        
    }
}
