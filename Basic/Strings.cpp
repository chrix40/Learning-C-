#include <iostream>
using namespace std;

int main(){
    string x;
    string s = "Olá mundo!";
    cout << s << endl;
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The txt is: " << txt << endl;
    txt[0] = 'J';
    cout << "The txt now is: " << txt; // this change the caracter in position [0]
    
    string a = "We are the so-called \"Vikings\" from the north."; // this keeps the quotes in case you need to keep in some string
    
    return 0;
}
