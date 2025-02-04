#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
 
int main() {
int n;
cin>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++){
    int v1,v2;
    cin>>v2>>v1;
    v.push_back({v1,v2});
}
sort(v.begin(),v.end());
int cnt=1;
int d=0;
for(int i=1;i<v.size();i++){
    if(v[i].second>=v[d].first){
        cnt++;
        d=i;
    }
}
cout<<cnt<<" ";
    return 0;
}
