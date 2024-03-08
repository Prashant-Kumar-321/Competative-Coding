#include<iostream>
#include<unordered_map>
#include<string>
#include<sstream>

using namespace std; 

//*************************************
	using ump = unordered_map<string, int>; 
	using ll = long long; 

//*************************************

class EcologicalBinPacking
{
	public: 
		void push_ele(const string& bin , ll count){
			mp[bin] = count; 
		}

		void initializeMap(string& line);

		void getResult() const{	
			for(const auto& v: mp){
				cout<< v.first<< " ---> "<< v.second<< endl; 
			}

			cout<< endl<< endl; 
		} 	

	private: 
		ump mp; 
}; 


// read series of lines
// each line container 9 numbers which are space seperated 
// first three number are count of bottles in bin 1 of brown, green, clear color respectively 
// i want to store this info in the unordered_map in the following formate 
// "1B" = count_brown_bottle "2B" = 
// "1G" = count_green_bottle "2G" = 
// "1C" = count_clear_bottle "2C" = 

// don't know how many lines will be there 

void EcologicalBinPacking::initializeMap(string& line){
	stringstream stream(line); 

	for(int i=1; i<=3; ++i){
		string b, g, c; 
		getline(stream, b, ' '); 
		getline(stream, g, ' '); 
		getline(stream, c, ' '); 

		ll cb, cg, cc; 
		cb = stoll(b); 
		cg = stoll(g); 
		cc = stoll(c); 

		string bin = to_string(i); 
		push_ele(bin+'B', cb); 
		push_ele(bin+'G', cg); 
		push_ele(bin+'C', cc); 
	}
}

int main(){
	
	string line; 
	while(getline(cin, line))
	{
		EcologicalBinPacking ebp; 
		ebp.initializeMap(line);

		ebp.getResult();   
	}	

	
	return 0; 
}



