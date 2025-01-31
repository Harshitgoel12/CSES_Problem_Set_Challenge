#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  string str;
  cin>>str;
  sort(str.begin(),str.end());
  int size=1;
  for(int i=1;i<=str.size();i++){
      size*=i;
  }
  int val=size;
  set<string>st;
  st.insert(str);
  while(next_permutation(str.begin(),str.end())){
     
     st.insert(str);
  }
  cout<<st.size()<<endl;
  for(auto it: st){
      cout<<it<<endl;
  }
}
