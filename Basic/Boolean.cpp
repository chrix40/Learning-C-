#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 9;
    cout << (x > y) << '\n'; // returns 1 (true), because 10 is higher than 9
    int z = 10;
    cout << (z == 10) << '\n';  // returns 1 (true), because the value of x is equal to 10
    cout << (10 == 15) << '\n';  // returns 0 (false), because 10 is not equal to 15

    return 0;
}