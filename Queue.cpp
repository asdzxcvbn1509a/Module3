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

int main() {
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
