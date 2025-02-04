#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
long long int maxi=INT_MIN;
long long int sum=0;
for(int i=0;i<n;i++){
    int v;
    cin>>v;
    sum+=v;
    maxi=max(maxi,sum);
    if(sum<0)sum=0;
}
cout<<maxi<<endl;
    return 0;
}
