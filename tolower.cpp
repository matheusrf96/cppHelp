#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (string::size_type i = 0;  i < str.length(); ++i){
        	str[i] = tolower(str[i]);
	}

	cout << str << endl;

	return 0;
}
