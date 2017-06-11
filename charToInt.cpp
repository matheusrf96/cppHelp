#include <iostream>
#include <string>
using namespace std;

int main(){
	string maiusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string minusculas = "abcdefghijklmnopqrstuvwxyz";

    	cout << "MAIUSCULAS: " << endl;

	for(int i = 0; i < maiusculas.length(); i++){
        	cout << maiusculas[i] << ": " << (int)maiusculas[i] << endl;
	}

	cout << endl << "minusculas: " << endl;

	for(int i = 0; i < minusculas.length(); i++){
        	cout << minusculas[i] << ": " << (int)minusculas[i] << endl;
	}
}
