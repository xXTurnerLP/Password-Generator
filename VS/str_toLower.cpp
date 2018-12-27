// Shitty needed includes :D ( no srsly they are needed )
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string str_toLower(string str) { // Function to lower the case of a string for future testing/comparing
	for (int i = str.length(); i > 0; i--) // for loop which makes every character to lower case with the function tolower from <cctype>
		str[i - 1] = tolower(str[i - 1]); // Every iteration set str[character position] to the lower equivalent
	return str; // Returns the final product to the function
}