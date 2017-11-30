#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        int age;
        string name;
};

int main(){
    Person p;
    p.age = 25;
    p.name = "ABC";

    p.age++;

    cout << "Idade: " << p.age << endl;
    cout << "Nome: " << p.name << endl;
}
