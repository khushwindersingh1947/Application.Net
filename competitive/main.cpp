#include <iostream>

using namespace std;

int main()
{
    int sum = 5;
    int A[] = {1,2,3,4,5,6};

    for(auto x:A){
        sum += x;
    }
    cout<<sum;
    return 0;
}
