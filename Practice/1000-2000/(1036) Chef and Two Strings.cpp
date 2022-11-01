#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    int min=0,max=0;
	    for(int i=0;i<s1.length();i++){
	        if(s1[i]=='?'||s2[i]=='?'){
	            max++;
	        }
	        if(s1[i]!='?'&&s2[i]!='?'&&s1[i]!=s2[i]){
	            max++;
	            min++;
	        }
	    }
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
