#include<bits/stdc++.h>
using namespace std;

int main(){
  int x;
  int cnt;
  vector<int> v;
  cin>>x;
  for (int j = 0; j<x; j++){
    cnt = 0;
    v.clear();
    int y;
    cin>>y;
    for (int i = 0; i<y; i++){
      int z;
      cin>>z;
      v.push_back(z);
    }
    for (int i = 0; i<y-1; i++){
      for (int k = i+1; k<y; k++){
        if(v[i]<=v[k]){
          cnt++;
        }
      }  
    }
    cout<<cnt<<"\n";
  }
}
