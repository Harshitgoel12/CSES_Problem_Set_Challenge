#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main() {
 
 int n;
 cin>>n;
 set<int>st;
 for(int i=0;i<n;i++){
     int v;
     cin>>v;
     st.insert(v);
 }
 cout<<st.size()<<endl;
}
