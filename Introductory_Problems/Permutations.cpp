// TC : O(N)
// SC : O(1)

#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    if(n==2||n==3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
   
    int mid=(n+1)/2;
    int i=mid,j=n;
    while(i>=1&&j>mid){
        cout<<i<<"  ";
        cout<<j<<" ";
        i--;
        j--;
    }
    while(i>=1){
        cout<<i<<"  ";
        i--;
    }

}
