// TC : O(N)
// SC : O(1)

#include <iostream>
#include<vector>
using namespace std;
int main() {
  string str;
  cin>>str;
  vector<int>ch(26,0);
  for(int i=0;i<str.size();i++){
      ch[str[i]-'A']++;
  }
  string ans="";
  char cha=' ';
  for(int i=0;i<26;i++){
      int val=ch[i]/2;
      while(val>0){
          ans.push_back(char(i+65));
          val--;
      }
      if(ch[i]%2!=0&&cha!=' '){
          cout<<"NO SOLUTION"<<endl;
          return 0;
      }
      if(ch[i]%2!=0)cha=char(i+65);
  }
  if(cha!=' ')ans.push_back(cha);
 
  for(int i=25;i>=0;i--){
      int val=ch[i]/2;
      while(val>0){
          ans.push_back(char(i+65));
          val--;
      }
  }
   cout<<ans<<" ";
 
}
