#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define MAX 2000
/*
 * Create a prime table in 2000 
 */
int main(){
	vector<bool> v(MAX, 1);
	vector<int> prime;
	v[0] = v[1] = false;
	for(int i = 2; i<floor(sqrt(MAX)); i++){
		for(int j = i*i; j < MAX; j+=i){
			v[j] = 0;
		}
	}

	for(int i = 0; i<MAX; i++){
		if(v[i]){
			// cout<<i<<" ";
			prime.push_back(i);
		}
	}

	for(auto i : prime)
		cout<<i<<" ";
	return 0;

}
