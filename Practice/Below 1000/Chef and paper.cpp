/*Problem
Chef has to give a test which has a total of NN question, each question carries 33 marks for a correct answer and -1−1 for an incorrect answer. Chef decided to attempt all the questions. It is known that Chef got XX questions correct and the rest of them incorrect. For Chef to pass the course he must score at least PP marks.

Will Chef be able to pass the exam or not?

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, three integers N, X, PN,X,P.
Output Format
For each test case output "PASS" if Chef passes the exam and "FAIL" if Chef fails the exam.

You may print each character of the string in uppercase or lowercase (for example, the strings "pAas", "pass", "Pass" and "PASS" will all be treated as identical).*/


#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,p;
        cin>>n>>x>>p;
        // if(p<=((x*3)-(n-x)))
        //     cout<<"PASS"<<endl;
        // else
        //     cout<<"FAIL"<<endl;
        cout<<((p<=(x*3)-(n-x))?"PASS":"FAIL")<<endl;
    }
}
