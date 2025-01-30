
#include <iostream>
using namespace std;
int main() {
long long int num;
cin>>num;
long long int ans=0;
for(long long int i=5;i<=num;i*=5){
    ans+=num/i;
}
cout<<ans<<" ";
}
