/*
Problem
In the games played so far in the tournament, your team has earned PP points. To qualify for the semi-finals, you must collect a total of at least QQ points. You currently have RR games remaining in which you can earn 22 points for a victory, 11 points for a tie, and no points for a loss.

Is it possible that your team will make it to the semi-finals?

Input Format
The first line will have the value TT, which represents the number of testcases. Then come the testcases.
Each testcase has a single line of input and three numbers P, Q, RP,Q,R.
Output Format
For each test case, output in a single line YES if your team can qualify for the semi-finals, or NO if not possible.

Because output is case insensitive, "yes", "Yes", "YEs", "no", "nO" - all such strings will be accepted.*/



#include<iostream>
using namespace std;
int main()
{
    int t,p,q,r;
    cin>>t;
    while(t--)
    {
        cin>>p>>q>>r;
        cout<<((((r*2)+p)>=q)?"YES":"NO")<<endl;
    }
}
