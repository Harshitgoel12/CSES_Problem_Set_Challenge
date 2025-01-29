// TC : O(N)
// SC : O(1)

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<long>arr(n);
    long long int  ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){
            ans+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<ans<<"  ";
    return 0;

}
