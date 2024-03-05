#include<iostream>
#include<vector>
#include<utility>
using namespace std; 

// Shortcuts for 'common' data types in contest 
using ll = long long; 
using ii = pair<int, int>; 
using cc = pair<char, char>; 
using vii = vector<ii>; 
using vi = vector<int>; 

constexpr int INF = 1000000000; // 1 billion, safer than 2B for Floyd Warshall's 

//Common memset Settings 
// memset(memo, -1, sizeof(memo)); // <== Initialize DP memoization table with -1  
// memset(arr, 0, sizeof(arr));    // <== clear array of integers 