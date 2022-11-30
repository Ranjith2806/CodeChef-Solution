/*This Question is same as Code chef question (Cops and the Thief Devu)
problem link
https://www.codechef.com/submit/COPS


QUESTION:-
Problem
Vilgax is an intergalactic alien warlord and conqueror. He is out on a quest to destroy all the planets in the Silky Way Galaxy. There are 100100 planets in the Silky Way Galaxy arranged in a straight line numbered from 11 to 100100. Vilgax sends NN monsters across planets to destroy them. Given an array AA of size NN, where A_iA 
idenotes the initial planet where the i^{th}ith monster is located. The initial planets where monsters are located are already destroyed. Each monster can destroy PP planets in one hour. A monster can only travel in a straight line in any direction and will destroy all the planets in his path. A monster can travel only for HH hours after which it exhausts. Determine the number of safe planets that are not on the verge of destruction.


Input Format
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains 33 space-separated integers: N, P, HN,P,H.
The second line of each test case contains NN space-separated integers which represent the initial location of the monsters.
Output Format
For each test case, output in a single line the number of safe planets.

*/
#include <iostream>
using namespace std;

int main(){
    int t,n,p,h,count;
    
    cin>>t;
    while(t--){
        bool destroy[101]={false};
        cin>>n>>p>>h;
        p=p*h;
        count=0;
        for(int i=0;i<n;i++){
            cin>>h;
            
            if(h<=p&&(h+p)<=100){
                for(int i=1;i<=(h+p);i++){
                    destroy[i]=true;
                }
            }
            else if(h>p&&(h+p)<=100){
                for(int i=(h-p);i<=h+p;i++){
                    destroy[i]=true;
                }
            }
            else if(h>=p&&(h+p)>100){
                for(int i=h-p;i<=100;i++){
                    destroy[i]=true;
                }
            }
            else if(h<=p&&(h+p)>100){
                for(int i=1;i<=100;i++){
                    destroy[i]=true;
                }
            }
        }
        for(int i=1;i<=100;i++){
            if(!destroy[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
