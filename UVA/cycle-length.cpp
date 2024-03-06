#include<iostream>
#include<unordered_map>
using namespace std; 

unordered_map<int, int> mp; 

int findCycleLen(int n) 
{
	if(n == 1){
		return 1; 
	}

	if(mp.count(n)){
		return mp[n]; 
	}

	if(n%2 == 0){
		return 1+findCycleLen(n/2); 
	}else{
		return 1+findCycleLen(3*n+1); 
	}
}

int maxCycleLen(int i, int j){
	if(i > j) swap(i, j); // ensuring i will always be less than j 
	int maxCL = 0; 

	while(i<=j){
		int temans = findCycleLen(i); 
		maxCL = max(maxCL, temans); 
		++i; 
	}

	return maxCL; 
}

// Driver function 
int main(){

	int i, j; 
	while(cin>>i>>j){
		int ans = maxCycleLen(i, j);  
		cout<< i<< " "<< j<< " "<< ans<< endl; 
	}

	return 0; 
}