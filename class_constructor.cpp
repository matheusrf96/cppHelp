#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        int age;
        string name;

        //Construtor
        Person(int a, string n)
            :age(a), name(n)
        {}
};

class Animal{
    public:
        string name;
        string species;
        int age;

        Animal(string name, string species, int age){
            this->name = name;
            this->species = species;
            this->age = age;
        }
};

int main(){
    Person p(19, "Pessoa");
    Animal a("Matheus", "Capivara", 21);

    p.name = "[Nome]";

    cout << "Olá " << p.name << ", você tem " << p.age << " anos." << endl;
    cout << "Olá, animal! Seu nome é " << a.name << " sua espécie é " << a.species << " e você têm " << a.age << " anos de idade!" << endl; 
}
