// TC : O(N)
// SC : O(1)

#include<iostream>
#include<vector>
using namespace std;
int main(){

string str;
cin>>str;
int ans=1;
int cnt=1;
for(int i=1;i<str.size();i++){
    if(str[i]==str[i-1]){
        cnt++;
        ans=max(ans,cnt);
    }
    else{
        
        cnt=1;
    }
}
cout<<ans<<endl;
return 0;
}
