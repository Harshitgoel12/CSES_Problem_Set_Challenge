#include <iostream>
#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int N = 8;
bool col[N], diag1[2 * N], diag2[2 * N];
int solutions = 0;
void rec(int idx,vector<vector<char>>&chess){
    if(idx==chess.size()){
        solutions++;
    return;}
    for(int j=0;j<chess.size();j++){
        if (chess[idx][j] == '*' || col[j] || diag1[idx - j + N - 1] || diag2[idx + j]) continue;
          col[j] = diag1[idx - j + N - 1] = diag2[idx + j] = true;
      rec(idx+1,chess);
        col[j] = diag1[idx - j + N - 1] = diag2[idx + j] = false;
    }
}
int main() {
vector<vector<char>>chess(8,vector<char>(8));
for(int i=0;i<chess.size();i++){
    for(int j=0;j<chess.size();j++){
        cin>>chess[i][j];
    }
}
    rec(0,chess);
 
cout<<solutions<<endl;
 
}
 
 
