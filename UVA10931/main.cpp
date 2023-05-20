#include<bits/stdc++.h>
using namespace std;
int main(){
  cin.tie(0);
  int in = 0;
  int pa, cnt= 0;
  stack<int> tmp;
  while(1){
    cin>>in;
    if(!in) break;
    cout<<"The parity of ";
    cnt = 0;
    while(in){
      if(in & 1) {
        cnt++;
        tmp.push(1);
      }
      else tmp.push(0);
      in = in>>1;
    }
    while (!tmp.empty()){
      cout<<tmp.top();
      tmp.pop();
    }
    cout<< " is " << cnt << " (mod 2).\n";
  }
}
