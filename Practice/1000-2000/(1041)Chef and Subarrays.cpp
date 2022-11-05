/*Chef likes problems involving arrays. Unfortunately, the last one he tried to solve didn't quite get solved.

Chef has an array A of N positive numbers. He wants to find the number of subarrays for which the sum and product of elements are equal.

Please help Chef find this number.

Input
The first line of input contains an integer T denoting the number of test cases. T test cases follow. The first line of each test contains the integer N. The next line contains N integers — A1, A2, ..., AN — denoting the array.
Output
For each test case, output a single line with the answer for the instance.*/

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
            for(int i=0;i<n;i++)
            {
                int sum=0, product=1;
                for(int j=i;j>=0;j--)
                {
                    sum+=arr[j];
                    product*=arr[j];
                    if(sum==product)
                    count++;
                }
            }
            cout<<count<<endl;
    }
}

