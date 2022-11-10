#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   int matrix[n][n] = {};
        int count = 1;

	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    int jk = j, ik = i;
                    while(jk>=0 && ik<n){
                        matrix[ik][jk] = count;
                        count++;
                        ik++;
                        jk--;
                    }
                }
	        }
	    }

	    for(int x=0; x<n; x++){
	        for(int y=0; y<n; y++){
	            cout << matrix[x][y] << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}
