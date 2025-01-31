// TC : O(1)
// SC : O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
       if(x>y)swap(x,y);
       if(x*2<y){
           cout<<"NO"<<endl;
           continue;
       }
       int val=x+y;
       if(val%3==0){
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;
       
    }
}
