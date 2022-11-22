#include <bits/stdc++.h> // we should use thid header file only while working on GCC complier.
// #include <set>
// #include <algorithm>
// #include <cmath>
// #include <iostream>
using namespace std;

auto precompute(){
    set<int> s;
    for(int i=0;i<=30;i++)
    for(int j=0;j<=30;j++)
    if(i!=j)s.insert(pow(2,i)+pow(2,j));
    return s;
}

auto calculate_moves(set<int>&s,int N){
    if(N<3)return 3-N;
    auto it=s.lower_bound(N);
    if(N==*it)return 0;
    return min(N-*prev(it),*it-N);
}
int main(){
    auto s=precompute();
    int t;
    cin>>t;
    while(t--){
        int N;cin>>N;
        cout<<calculate_moves(s,N)<<endl;
    }
    return 0;
}
