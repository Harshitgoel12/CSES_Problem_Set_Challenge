// TC : O(N)
// SC : O(1)

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
   int n;
   cin>>n;
   unordered_map<int,int>mp;
   vector<int>arr(n,0);
   for(int i=0;i<n-1;i++){
       cin>>arr[i];
       mp[arr[i]]++;
       
   }

   for(int i=0;i<n;i++){
      if(mp.find(i+1)==mp.end()){
          cout<<i+1<<endl;
          return 0;
      }
}
return 0;
}


//approach 2
// TC : O(N)
// SC : O(1)

#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   vector<int>arr(n,0);
   for(int i=0;i<n-1;i++){
       cin>>arr[i];
       
   }
   int ans=0;
   for(int i=0;i<arr.size();i++){
       ans^=arr[i]^i+1;
   }
cout<<ans<<" ";
}

//approach 3

// TC : O(N)
// SC : O(1)


#include<iostream>
#include<vector>
using namespace std;
int main(){
   int n;
   cin>>n;
   int sum=0;
   vector<int>arr(n,0);
   for(int i=0;i<n-1;i++){
       cin>>arr[i];
      sum+=arr[i];
       
   }

    int val=n*(n+1)/2;
    cout<<val-sum<<endl;
return 0;
}
