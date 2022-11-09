/* Chef likes to play with cards a lot. Today, he's playing a game with three cards. Each card has a letter written on the top face and another (possibly identical) letter written on the bottom face. Chef can arbitrarily reorder the cards and/or flip any of the cards in any way he wishes (in particular, he can leave the cards as they were). He wants to do it in such a way that the letters on the top faces of the cards, read left to right, would spell out the name of his favorite friend Bob.

Determine whether it is possible for Chef to spell "bob" with these cards.

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single string with length 33 denoting the characters written on the top faces of the first, second and third card.
The second line contains a single string with length 33 denoting the characters written on the bottom faces of the first, second and third card.
Output
For each test case, print a single line containing the string "yes" (without quotes) if Chef can spell "bob" or "no" (without quotes) if he cannot.*/


#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        string s1,s2; cin>>s1>>s2;
        int a[3]={0};  // b count
        for(int i=0;i<3;i++)  // 'b' present  or not
        {
            if(s1[i]=='b' || s2[i]=='b')
                a[i]=1;
        }
        int b_count=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==1)
                b_count++;
        }
        if(b_count<=1)
            cout<<"no"<<endl;
        else if(b_count==2)
        {
            int index=0;
            for(int i=0;i<3;i++)
            {
                if(a[i]==0)
                    index=i;
            }
            if(s1[index]=='o' || s2[index]=='o')
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else if(b_count==3)
        {
            int o_count=0;
            for(int i=0;i<3;i++)
            {
                if(s1[i]=='o' || s2[i]=='o')
                    o_count++;
            }
            if(o_count==0)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
}
