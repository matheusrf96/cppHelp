#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    int length = s.length();
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    return s;
}

int main(){
	string str = "ABCdef";
	str = reverse(str);

	cout << str << endl; //defCBA

	return 0;
}
