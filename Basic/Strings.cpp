#include <iostream>
using namespace std;

int main(){
    string x;
    string s = "Olá mundo!";
    cout << s << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The txt is: " << txt << endl;
    txt[0] = 'J'; // this change the caracter in position [0]
    cout << "The txt now is: " << txt << endl; 
    
    string a, b, c;
    a = "We are the so-called \"Vikings\" from the north."; // this keeps the quotes in case you need to keep in some string
    b = "It\'s alright.";
    c = "The character \\ is called backslash.";
    cout << a << endl << b << endl << c << endl;
    
    return 0;
}
