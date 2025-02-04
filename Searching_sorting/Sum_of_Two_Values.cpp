#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,tar;
    cin>>n>>tar;
     map<int,int>mp;
     bool flag=false;
    for(int i=0;i<n;i++){
      int v;
      cin>>v;
      if(mp.find(tar-v)!=mp.end()){
          flag=true;
          cout<<mp[tar-v]+1<<" "<<i+1<<" "<<endl;
          break;
      }
      mp[v]=i;
    }
    if(!flag){
        cout<<"IMPOSSIBLE"<<endl;
    }
    
   
    
}
