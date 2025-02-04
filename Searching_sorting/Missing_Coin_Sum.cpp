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
    long long int val=1;
    for(int i=0;i<n;i++){
        if(v[i]>val){
            break;
        }
        val+=v[i];
        
    }
    cout<<val<<endl;
    return 0;
}
