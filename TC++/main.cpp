#include <iostream>

using namespace std;
class Khush{
public:
    int name = 7;
    void cool(){
        cout << "hi bro" << endl;
    }
};

void print();

int main()
{
    Khush khushi;
    cout << khushi.name;
    /*print();
    int a;
    int b;
    int sum;

    std::cout << "type a number!" << std::endl;
    cin >> a; //stored value in a;

    std::cout << "type a number!" << std::endl;
    cin >> b; //stored value in a;

    sum = a + b;

    cout << "the value is " << sum << endl;*/

    return 0;
}
void print(){
    cout << "Hi brother";
}
