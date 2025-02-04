#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int mid=(n)/2;
    int val=v[mid];
    long long int ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(val-v[i]);
    }
    cout<<ans<<endl;
    return 0;
}
