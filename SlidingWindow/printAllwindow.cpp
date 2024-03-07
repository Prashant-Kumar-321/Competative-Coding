#include<iostream>
using namespace std; 

using ll = long long; 


void printAllWindows(ll n, ll k){
	// processing every subarrray(window) of 
	// k size 
	for(int i=0; (i+k)<=n; ++i){
		int windowST = i; 
		int windowEnd = i+k-1; 

		cout<< "["<< windowST<< " "<< windowEnd<< "]"<< endl; 
	}
}


// Driver function 
int main(){
	ll n = 1e9; 
	ll k = 100; 
	printAllWindows(n, k); 

	return 0; 
}