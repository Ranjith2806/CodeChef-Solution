//APPROACH-1(By taking the input as array,by sorting the array and printing the second elememt)
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<arr[1]<<endl;
    }
}    //Time Complexity:o(nlogn);


//APPROACH-2(by finding maximum and minium of three numbers if a is not max and min then it is required output similarly for b and c)

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int maxi = max(max(a,b),c);
        int minm = min(min(a,b),c);
        cout<<((a!=maxi && a!=minm)? a:(b!=maxi && b!=minm)? b:c)<<endl;
    }
}
