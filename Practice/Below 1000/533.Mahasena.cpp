#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n],even=0,odd=0;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0)
    even++;
    else
    odd++;
    }
    if(even>odd)
    cout<<"READY FOR BATTLE";
    else
    cout<<"NOT READY";
    
	return 0;
}
