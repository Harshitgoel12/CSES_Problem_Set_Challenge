#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int maxi=0;
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int v1,v2;
        cin>>v1>>v2;
        v.push_back({v1,v2});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int v1=v[i].first;
        int v2=v[i].second;
        if(pq.empty()){
            pq.push(v2);
        }
        else{
            while(!pq.empty()&&pq.top()<v1){
                pq.pop();
            }
            pq.push(v2);
        }
        int val=pq.size();
        maxi=max(maxi,val);
    }
    cout<<maxi<<endl;
    
    return 0;
}
