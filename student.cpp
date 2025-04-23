#include <iostream>
#include <vector>

using namespace std;

class Student {
    private:
    vector<string> name;
    vector<int> score;
    
    public:
    void add() {
        string a;
        int b;
        cout << "Enter name : ";
        cin >> a;
        cout << "Enter score : ";
        cin >> b;
        name.push_back(a);
        score.push_back(b);
        cout << endl;
    }
    
    void find() {
        bool found = false;
        string n;
        cout << "Enter name : ";
        cin >> n;
        
        for (int i=0; i<name.size(); i++) {
            if (name[i] == n) {
                cout << "Score : " << score[i] << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Not found" << endl;
        }
        cout << endl;
    }
};

int main() {
    Student s;
    int choice;
    
    while (true) {
        cout << "=========" << endl;
        cout << " Student" << endl;
        cout << "=========" << endl;
        cout << "1 = Add" << endl;
        cout << "2 = Find" << endl;
        cout << "3 = Exit" << endl;
        cout << "=========" << endl;
        cout << "Choice : ";
        cin >> choice;
        
        switch (choice) {
            case 1:
            s.add();
            break;
            case 2:
            s.find();
            break;
            case 3:
            return 0;
            default:
            cout << "Wrong choice" << endl;
            cout << endl;
        }
        
        
    }
    return 0;
}
