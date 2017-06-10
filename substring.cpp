#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	//TESTES
	string str2 = str.substr(0, 5); //ABCDE
	cout << str2 << endl;

	str2 = str.substr(0, 3); //ABC
	cout << str2 << endl;

	str2 = str.substr(7,5); //Pega as 5 primeiros caracteres a partir da posição 7(letra 'h');
	cout << str2 << endl;

	str2 = str.substr(12, 8); //MNOP...
	cout << str2 << endl;


	return 0;
}
