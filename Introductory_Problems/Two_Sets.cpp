// TC : O(N)
// SC: O(1)

#include <iostream>
using namespace std;
int main() {
   long long int  n;
   cin>>n;
   long long int  sum=n*(n+1)/2;
   if(sum%2!=0){
       cout<<"NO"<<endl;
       return 0;
   }
   cout<<"YES"<<endl;
   cout<<(n/2)<<endl;
   int temp=n;
   bool flag=false;
   while(temp>0){
       if(!flag){
           cout<<temp<<" ";
          
           flag=true;
       }
       else{
           cout<<temp<<" ";
           temp--;
           if(temp>0){
               cout<<temp<<" ";
           }
          
           flag=true;
       }
        temp-=3;
       
       
   }
   cout<<endl;
   cout<<(n+1)/2<<endl;
   temp=n-1;
   while(temp>0){
       if(!flag){
           cout<<temp<<" ";
          
           flag=true;
       }
       else{
           cout<<temp<<" ";
           temp--;
           if(temp>0){
               cout<<temp<<" ";
           }
          
           flag=true;
       }
        temp-=3;
       
       
   }
   
}
