#include <iostream>
#include<bits/stdc++.h>
#define ll  long long int
using namespace std;
 
ll rec(vector<ll>&arr,ll sum,int i,ll s){
    if(i==arr.size()){
       return abs(sum-2*s);
    }
ll take=rec(arr,sum,i+1,s+arr[i]);
ll nottake=rec(arr,sum,i+1,s);
return min(take,nottake);
     
}
int main() {
 int n;
 cin>>n;
 vector<ll>arr(n);
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
ll sum=accumulate(arr.begin(),arr.end(),0LL);
 cout<<rec(arr,sum,0,0LL);
 
 
}
