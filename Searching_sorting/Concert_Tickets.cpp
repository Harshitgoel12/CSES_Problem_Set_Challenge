#include<bits/stdc++.h>
using namespace std;
class Tickets{
    private:
    int bs(int num,multiset<int>&mp,int m){
        auto it=mp.lower_bound(num);
        if(*it==num){
            mp.erase(it);
            return num;
        }
        if(it==mp.begin())return -1;
        it--;
        int value=*it;
        mp.erase(it);
        return value;
        
 
    }
    public:
    int n,m;
    int *arr1,*ans;
    multiset<int>arr;
    bool *vis;
    Tickets(int n,int m){
        this->n=n;
        this->m=m;
        arr1=new int[m];
        ans=new int[m];
    }
    void take_input(){
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            arr.insert(val);
        }
        for(int i=0;i<m;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            ans[i]=0;
        }
    }
    void produce_output(){
        
        for(int i=0;i<m;i++){
            ans[i]=bs(arr1[i],arr,n);
        }
    }
    void print_answer(){
        for(int i=0;i<m;i++){
            cout<<ans[i]<<endl;
        }
    }
  
};
int main(){
    int n,m;
    cin>>n>>m;
    Tickets obj(n,m);
    obj.take_input();
    obj.produce_output();
    obj.print_answer();
}
