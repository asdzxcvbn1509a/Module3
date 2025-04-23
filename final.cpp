#include <iostream>
#include <vector>

using namespace std;

class Queue {
    private:
    vector<string> items;
    
    public:
    bool isempty() {
        return items.empty();
    }
    
    void enqueue(string value) {
        items.push_back(value);
        cout << "Added \" " << value << " \" to the queue" << endl;
        cout << endl;
    }
    
    void dequeue() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            cout << "Dequeue \" " << items.front() << " \" from the queue" << endl;
            items.erase(items.begin());
            cout << endl;
        }
    }
    
    void peek() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            cout << "Front of the queue : " << items.front() << endl;
        }
    }
    
    void size() {
        cout << "Queue size : " << items.size() << endl;
    }
    
    void display() {
        if (isempty()) {
            cout << "Queue is empty" << endl;
        }
        else {
            for (string val : items) {
                cout << "[ " << val << " ]" << endl;
            }
            cout << endl;
        }
    }
};

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

int queue() {
    Queue q;
    int choice;
    string value;
    
    while (true) {
        cout << "=================" << endl;
        cout << " Queue Simulator" << endl;
        cout << "=================" << endl;
        cout << "1 = Enqueue" << endl;
        cout << "2 = Dequeue" << endl;
        cout << "3 = Peek" << endl;
        cout << "4 = Isempty" << endl;
        cout << "5 = Size" << endl;
        cout << "6 = Display" << endl;
        cout << "7 = Exit" << endl;
        cout << "=================" << endl;
        cout << endl;
        
        cin >> choice;
        
        switch (choice) {
            case 1:
            cout << "Enter value to enqueue : ";
            cin >> value;
            q.enqueue(value);
            break;
            case 2:
            q.dequeue();
            break;
            case 3:
            q.peek();
            break;
            case 4:
            cout << (q.isempty() ? "Queue is empty":"Queue is not empty") << endl;
            cout << endl;
            break;
            case 5:
            q.size();
            break;
            case 6:
            q.display();
            break;
            case 7:
            return 0;
            default:
            cout << "Wrong choice" << endl;
            cout << endl;
            
        }
        
    }
    return 0;
}

int student() {
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

int logic() {
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

int main() {
    cout << "=========" << endl;
    cout << " Modul 3" << endl;
    cout << "=========" << endl;
    cout << "1 = Queue" << endl;
    cout << "2 = student" << endl;
    cout << "3 = Logic" << endl;
    cout << "4 = Exit" << endl;
    cout << "============" << endl;
    
    int choice;
    cout << "Choice : ";
    cin >> choice;
    
    switch (choice) {
        case 1:
        queue();
        break;
        case 2:
        student();
        break;
        case 3:
        logic();
        break;
        case 4:
        return 0;
        default:
        cout << "Wrong choice" << endl;
        cout << endl;
    }
    
    return 0;
}
