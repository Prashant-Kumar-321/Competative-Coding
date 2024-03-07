#include<iostream>
#include<unordered_map>
#include<string>
#include<sstream>

#define INF 1000000000

using namespace std; 
using ll = long long; 
using ump = unordered_map<string, ll>; 

ll minMov = INF; 
string bincolor = ""; 
ump mp; 

void minimumMovementofBottles(string str, string per, ump& mp, ll mv)
{
	if(str == ""){
		if(mv < minMov){
			minMov = mv; 
			bincolor = per; 
		}
		return; 
	}

	for(int i=0; i<str.length(); ++i){
		char color = str[i]; 
		int tMv; 
		int binNo = per.length()+1; 

		if(binNo == 1){
			tMv = mp[to_string(2)+color] + mp[to_string(3)+color]; 
		}else if(binNo == 2){
			tMv = mp[to_string(1)+color] + mp[to_string(3)+color]; 

		}else { // binNo == 3
			tMv = mp[to_string(1)+color] + mp[to_string(2)+color]; 
		}

		minimumMovementofBottles(str.substr(0,i)+str.substr(i+1), per+str[i], mp, mv+tMv); 
	}
}

// Driver function 
int main(int argc, char** agrv)
{
	string line; 
	while(getline(cin, line)){
		mp.clear(); 
		minMov = INF; 
		bincolor = ""; 

		istringstream stream(line); 
		
		for(int i=1; i<=3; ++i){
			string b, g, c; 

			getline(stream, b, ' '); 
			getline(stream, g, ' '); 
			getline(stream, c, ' '); 

			mp[to_string(i)+'B'] = stoll(b); 
			mp[to_string(i)+'G'] = stoll(g); 
			mp[to_string(i)+'C'] = stoll(c); 
		}

		minimumMovementofBottles("BCG", "", mp, 0); 

		cout<< bincolor<< " "<< minMov<< endl; 
	}

	return 0; 
}