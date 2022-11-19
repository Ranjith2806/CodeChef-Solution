#include <iostream>
using namespace std;

int main(){
    int t,m,x,y,count;
    
    cin>>t;
    while(t--){
        bool house[101]={false};
        cin>>m>>x>>y;
        x=x*y;
        count=0;
        for(int i=0;i<m;i++){
            cin>>y;
            
            if(y<=x&&(y+x)<=100){
                for(int i=1;i<=(y+x);i++){
                    house[i]=true;
                }
            }
            else if(y>x&&(y+x)<=100){
                for(int i=(y-x);i<=y+x;i++){
                    house[i]=true;
                }
            }
            else if(y>=x&&(y+x)>100){
                for(int i=y-x;i<=100;i++){
                    house[i]=true;
                }
            }
            else if(y<=x&&(y+x)>100){
                for(int i=1;i<=100;i++){
                    house[i]=true;
                }
            }
        }
        for(int i=1;i<=100;i++){
            if(!house[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
