#include <iostream>
#include "Header.h"
#include <ctime>
using std::string; 
using namespace std;

int tuna = 68;
// OOP basics
/*
class Abstract {
    virtual void ask() = 0; //whichever class uses this, must oblige to implement this function
};

class Employee: Abstract { // this inheritance is private by default
private:
    string Name;
    string Company;
    int Age;

public:
    void ask() {
        if (Age > 30) {
            cout << Name << " got promoted!" << endl;
        }
        else {
            cout << Name << " Sorry!" << endl;
        }
    }
    void introduce() {
        cout << "Hi I am " << Name << ",I am " << Age << " years old." << endl;
    }
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void Work() {
        std::cout << "is doing work" << endl;
    }
    //constructor
    Employee() {}
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

class Developer : public Employee { // this inheritance is private by default//now developer can use properties of employee everywhere
public:
    string favLang;

    Developer(string name, string company, int age, string favLang) : Employee(name, company, age) {
        favLang = favLang;
    }
    void fixBug() {
        std::cout << getName() << "Fixed Bug" << std::endl;
    }
    void Work() {
        std::cout << "is doing code" << endl;
    }
};
class Teacher : Employee {
public:
    string subject;
    void lesson() {
        cout << getName() << "prepared lesson" << endl;
    }
    void Work() {
        std::cout << "is doing teaching" << endl;
    }
};
*/
//int main()
//{

    //Header h;
    //h.age();
    //Employee employee1 = Employee("Khushwinder", "Apple", 21);
    /*
    employee1.Name = "Khushwinder";
    employee1.Company = "Apple";
    employee1.Age = 21;
    */

    //employee1.introduce();
    //employee1.ask();
    //Developer d = Developer("Khush","Apple",12,"C++");
    //d.ask();
    //Teacher t;
    /*int x = 0;

    for (int i = 0; i < 20; i++) {
        x++;
        cout << time(0) << endl;
        if (x == 15) {
            continue;
        }
        cout << x << endl;
    }
    

    int tuna = 20;
    cout << tuna << endl;
    cout << ::tuna << endl;
    {
        int tuna = 21;
        cout << ::tuna << endl;
    }



    return 0; 

}
*/