#include <iostream>

using namespace std;

int main() {
    string a;
    cout << "=======" << endl;
    cout << " Logic" << endl;
    cout << "=======" << endl;
    cout << "P = true" << endl;
    cout << "Q = flase" << endl;
    cout << "==========" << endl;
    
    cout << "1.) P && Q = ?" << endl;
    cout << "Answer : ";
    cin >> a;
    if (a == "false" ) {
        cout << "Correct answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl;
    
    cout << "2.) P || Q = ?" << endl;
    cout << "Answer : ";
    cin >> a;
    if (a == "true") {
        cout << "Correct answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl;
    
    cout << "3.) !P = ?" << endl;
    cout << "Answer : ";
    cin >> a;
    if (a == "false") {
        cout << "Corect answer" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }
    cout << endl;
    
    cout << "4.) !Q = ? " << endl;
    cout << "Answer : ";
    cin >> a;
    if (a == "true") {
        cout << "Correct Answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl;
    
    return 0;
}
