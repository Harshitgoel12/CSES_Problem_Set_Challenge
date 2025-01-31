
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
  vector<string>str;
  str.push_back("0");
  str.push_back("1");
  for(int i=2;i<=n;i++){
      vector<string>st;
      for(int j=0;j<str.size();j++){
          string s="0"+str[j];
          st.push_back(s);
      }
      for(int j=str.size()-1;j>=0;j--){
          st.push_back("1"+str[j]);
      }
     str=st;
  }
  for(int i=0;i<str.size();i++){
      cout<<str[i]<<endl;
  }
}
