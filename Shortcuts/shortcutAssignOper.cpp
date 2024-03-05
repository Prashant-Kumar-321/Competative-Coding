#include<iostream>
using namespace std; 

void shortcuts (){
	int ans = 10, val = 3; 
	// ans += val; // ans = ans + val
	// cout<< ans<< endl; 

	// ans -= val; // ans = ans - val 
	// cout<< ans<< endl; 

	// ans *= val; // ans = ans * val 
	// cout<< ans<< endl; 

	// ans /= val; // ans = ans / val
	// cout<< ans<< endl; 

	// ans %= 10;  // ans = ans % 10 
	// cout<< ans<< endl; 
}

void loopValue(){
	int n = 10, index = 9; 
	int itr = 20; 

	while(itr--){
		index = (index + 1) % n; 
		cout<< index<< endl; 
	}
}
/*Dry Run 
	it = 20 
		index = 9 
		index+1 = 10
		10%10 = 0 
	it = 19 
		index = 0
		index+1 = 1
		1%10  = 1 
	it = 18
		index = 1 
		index+1 = 2, 2%10 = 2
	it = 17 
		index = 2, index+1 = 3, 3%10 = 3 
	it = 16 
		index = 3, index+1 = 4, 4%10 = 4
	it = 15, index = 5 
	it = 14, index = 6
	it = 13, index = 7 
	it = 12, index = 8
	it = 11, index = 9
	it = 10, index = 0 

*/

void loopValueDec(){
	int n = 10, index = 0; 
	int itr = 30;
	
	while(itr--){
		index = (index + n - 1) % n; 
		cout<< index<< " ";
		if(index == 0){	cout<< endl; }
	}
}

void roundingToNearestInt(){
	double d = 15.99348; 
	int nearnstInt; 
	nearnstInt = (int)(d+1.873); 
	cout<< (int)(d+1.873)<< endl; 
	cout<< nearnstInt<< endl; 
}

void findMin_Max(){
	int ans = 20, new_computation = 19; 
	// ans = std::min(ans, new_computation); 
	cout<< ans<< endl; 

	new_computation = 35; 
	ans = std::max(ans, new_computation); 
	cout<< ans<< endl; 
}

void shortCircuit(){
	int opr1 = 1, opr2 = 5; 
	char ch='N'; 

	// Logical OR (||)
	// bool res = (opr1<opr2 || (ch = 'E')); 
	// cout<< res<< " "<< ch<< endl; 

	// Logical AND (&&)
	bool res = (opr1<opr2) && (ch = 'E'); 
	cout<< res<< " "<< ch<< endl; 

}


// Driver function 
int main()
{
	shortcuts(); 
	loopValue();
	loopValueDec();  
	roundingToNearestInt(); 
	findMin_Max(); 
	shortCircuit(); 

	return 0; 
}