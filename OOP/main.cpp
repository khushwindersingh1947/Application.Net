#include <iostream>
using std::string;
using namespace std;

class Employee{ // private by default
    public:
        string Name;
        string Company;
        int Age;
        void introduce(){
            std::cout << "Hi I am "  << Name << ",I am " << Age << " years old." << endl;
        }
};

int main()
{
    Employee employee1;
    employee1.Name = "Khushwinder";
    employee1.Company = "Apple";
    employee1.Age = 21;
    employee1.introduce();

}
