// TC : O(log(N))
// SC: O(1)

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int val=2;
    long long int mod=1e9+7;
    long long int ans=1;
  while(n>0){
      if(n%2!=0){
          ans*=val%mod;
          ans=ans%mod;
      }
      val=(val%mod*val%mod)%mod;
      n/=2;
      
  }
  cout<<ans<<" ";
}
