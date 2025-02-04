#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n,w;
cin>>n>>w;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
int i=0,j=arr.size()-1;
int cnt=0;
while(i<=j){
    if(i<j&&arr[i]+arr[j]<=w){
        i++;
        j--;
        cnt++;
    }
    else{
        j--;
        cnt++;
    }
    
}
cout<<cnt<<endl;
    return 0;
}
