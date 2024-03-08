#include<iostream>
#include<vector> 
#include<string>
#include<sstream>

using namespace std; 


//**************************************

using vi = vector<int>; 

//*******************************************

int main()
{
	// int n; 
	// cin>> n; 

	// vi arr(n);

	// for(int i=0; i<n; i++){
	// 	int num; 
	// 	cin>> num; 
	// 	arr.at(i) = num; 
	// } 

	// cout<< "Elements of the array  = "<< endl; 
	// for(const auto& v: arr){
	// 	cout<< v<< " "; 
	// }
	// cout<< endl; 





	string line;
	while(getline(cin, line))
	{
		stringstream stream(line); 
		string num; 

		while(getline(stream, num, ' ')){
			cout<<(2*std::stoi(num))<< " "; 
		}
		
		cout<< endl; 
	}


	return 0; 
}