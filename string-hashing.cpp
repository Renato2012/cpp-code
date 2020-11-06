#include <bitset> 
// functional header for hash<class template> class 
#include <functional> 
#include <iostream> 
#include <string> 
#include <vector> 

// More info about string-hashing: https://cp-algorithms.com/string/string-hashing.html

using namespace std; 

// To demonstrate String Hashing 
void stringHashing(string s) 
{ 
	// Get the string to get its hash value 
	string hashing = s; 

	// Instatiation of Object 
	hash<string> mystdhash; 

	// Using operator() to get hash value 
	cout << "String hash values: " << mystdhash(hashing) << endl; 
}

// Driver Code 
int main() 
{ 
    stringHashing("/ufba"); 
    stringHashing("/dcc"); 
    stringHashing("/video1"); 
    stringHashing("/ufba/dcc"); 
} 

