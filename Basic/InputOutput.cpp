#include <iostream>
using namespace std;


int main(){
    string fullName;
    cout << "Type your full name: ";
    cin >> fullName;
    cout << "Your name is: " << fullName; // this prints only the first word typed.

    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName << endl; // getline() function to read a line of text. 
    // return 0;    
}
