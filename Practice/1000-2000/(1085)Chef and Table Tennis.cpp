/*
Chef likes to play table tennis. He found some statistics of matches which described who won the points in order. A game shall be won by the player first scoring 11 points except in the case when both players have 10 points each, then the game shall be won by the first player subsequently gaining a lead of 2 points. Could you please help the Chef find out who the winner was from the given statistics? (It is guaranteed that statistics represent always a valid, finished match.)

Input
The first line of the input contains an integer T, denoting the number of test cases. The description of T test cases follows. Each test case consist a binary string S, which describes a match. '0' means Chef lose a point, whereas '1' means he won the point.

Output
For each test case, output on a separate line a string describing who won the match. If Chef won then print "WIN" (without quotes), otherwise print "LOSE" (without quotes).
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    int a=0;
	    int b=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            a++;
	        }
	        else b++;
	    }
	    if(a>=b)
	    {
	        cout<<"WIN"<<endl;
	    }
	    else cout<<"LOSE"<<endl;
	    
	}
}
