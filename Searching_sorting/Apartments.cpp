#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,k;
    cin>>m>>n>>k;
    vector<int>arr1(m);
    vector<int>arr2(n);
for(int i=0;i<m;i++){
    cin>>arr1[i];
}
for(int j=0;j<n;j++){
    cin>>arr2[j];
}
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
int i=0,j=0;
int cnt=0;
while(i<m&&j<n){
    if(arr1[i]+k>=arr2[j]&&arr1[i]-k<=arr2[j]){
        cnt++;
        i++;
        j++;
    }
    else{
        if(arr1[i]>arr2[j])j++;
        else i++;
    }
}
cout<<cnt<<endl;
}
