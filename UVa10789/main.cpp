#include<bits/stdc++.h>
using namespace std;
#define MAX 2002

bool prime[MAX];
string crt="0123456789ABCDEFGHIJKLMNOPRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


int main(){
	string s;
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	
	int n, tbl[128];
	// Prime table
	for(int i = 0; i<MAX; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;
	for(int i = 2; i < MAX; i++){
		if(prime[i]){
			for(int j = i * i; j<MAX; j+=i){
				prime[j] = false;
			}
		}
	}
	
	cin>>n;
	for(int i = 0; i<n; i++){
		cin>>s;
		cout<<"Case "<<i+1<<": ";
		for (int j = 0; j<128; j++){
			tbl[j] = 0;
		}
		for (int j = 0; j<s.size(); j++){
			tbl[s[j]]++;
		}
		bool out = 0;
		for(int j = 0; j<crt.size(); j++){
			if(prime[tbl[crt[j]]]){
				cout<<crt[j];
				out = true;
			}
		}
		if(!out) cout<<"empty";
		cout<<"\n";
	}
}
