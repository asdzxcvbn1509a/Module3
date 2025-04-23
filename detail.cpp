#include <iostream> //สำหรับ input/output
#include <vector> //สำหรับ vector

using namespace std; //ทำให้ไม่ต้องเขียน std

class Queue { //สร้าง class Queue
    private: //กำหนดให้ items ใช้ได้ในคลาสนี้เท่านั้น
    vector<string> items; //สร้าง vector เก็บตัวแปลเป็กตัวอักษร
    
    public: //สามารถเรียกใช้งานจากภายนอกได้
    bool isempty() { // เช็คว่ามี Queue ว่างไหม
        return items.empty(); //ส่งค่ากลับเป็น true or false
    }
    
    void enqueue(string value) { //เพื่มข้อมูลลงใน Queue
        items.push_back(value); //เพิ่มข้อมูลที่ท้ายเวกเตอร์
        cout << "Added \" " << value << " \" to the queue" << endl; //แสดงว่าเพิ่มข้อมูลอะไรลงไปใน Queue
        cout << endl; // จบบรรทัด
    }
    
    void dequeue() { //ลบข้อมูลออกจาก Queue
        if (isempty()) { //เช็คก่อนว่า Queue ว่างไหม
            cout << "Queue is empty" << endl;
        }
        else { //ถ้าคิวไม่ว่าง
            cout << "Dequeue \" " << items.front() << " \" from the queue" << endl; //แสดงค่าที่อยู่หน้าสุด
            items.erase(items.begin()); //ลบค่าที่อยู่หน้าสุด
            cout << endl; //จบบรรทัด
        }
    }
    
    void peek() { //ดูข้อมูลตัวหน้าสุด
        if (isempty()) { //เช็คก่อนว่า Queue ว่างไหม
            cout << "Queue is empty" << endl;
        }
        else { //ถ้าไม่ว่าง
            cout << "Front of the queue : " << items.front() << endl; //แสดงค่าตัวหน้าสุด
        }
    }
    
    void size() { //ดูขนาดของ Queue
        cout << "Queue size : " << items.size() << endl;
    }
    
    void display() { //แสดงค่าทุกค่าใน Queue
        if (isempty()) { //เช็คก่อนว่า Queue ว่างไหม
            cout << "Queue is empty" << endl;
        }
        else { //ถ้าไม่ว่าง
            for (string val : items) { //ลูปสมาชิกทุกตัวใน Queue
                cout << "[ " << val << " ]" << endl; //แสดงค่าใน Queue ตามลำดับ
            }
            cout << endl; //จบบรรทัด
        }
    }
};

class Student { //สร้าง class Student
    private: //ใช้ได้แค่ในคลาสนี้
    vector<string> name; //สร้าง vector เก็บค่าในรูปแปปตัวอักษร
    vector<int> score; //สร้าง vector เก็บค่าในรูปแปปจำนวนเต็ม
    
    public: //สามารถเข้าถึงได้จากส่วนอื่นๆ
    void add() { //เพิ่มข้อมูล
        string a; //ประกาศตัวแปลตัวอักษร
        int b; //ประกาศตัวแปลจำนวนเต็ม
        cout << "Enter name : ";
        cin >> a; //รับค่ามาเก็บใน a
        cout << "Enter score : ";
        cin >> b; //รับค่ามาเก็บใน b
        name.push_back(a); //เพื่มค่า a ลงใน name
        score.push_back(b); //เพิ่มค่า b ลงใน score
        cout << endl; //จบบรรทัด
    }
    
    void find() { //หาข้อมูล
        bool found = false; //กำหนดค่าให้ found = false
        string n; //ประกาศตัวแปลเก็บในรูปแบบตัวอักษร
        cout << "Enter name : ";
        cin >> n; //รับค่ามาเก็บไว้ในตัวแปล n
        
        for (int i=0; i<name.size(); i++) { //ลูปตามจำนวนสมาชิก
            if (name[i] == n) { //หาจนกว่าเท่ากัน
                cout << "Score : " << score[i] << endl; //แสดงจำนวนคะแนน
                found = true; 
            }
        }
        if (!found) {
            cout << "Not found" << endl;
        }
        cout << endl; //จบบรรทัด
    }
};

int queue() { //สร้างฟังก์ชัน queue
    Queue q; //กำหนด class queue q
    int choice; //สร้างตัวแปลเก็บจำนวนเต็ม
    string value; //สร้างตัวแปลเก็บตัวอักษร
    
    while (true) { //ลูปไปเรื่อยๆ
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
        cout << endl; //จบบรรทัด
        
        cin >> choice; //รับค่าจากผู้ใช้
        
        switch (choice) { //ดูว่าตรงกับเลขไหน ให้ใช้ฟังก์ชันนั้นๆ
            case 1:
            cout << "Enter value to enqueue : ";
            cin >> value; //รับค่าจากผู้ใช้
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
            cout << endl; //จบบรรทัด
            break;
            case 5:
            q.size();
            break;
            case 6:
            q.display();
            break;
            case 7:
            return 0; //จบการทำงาน
            default:
            cout << "Wrong choice" << endl;
            cout << endl; //จบบรรทัด
            
        }
        
    }
    return 0; //จบการทำงาน
}

int student() { //ประกาศตัวแปล student
    Student s; //กำหนด class Student s
    int choice; //ประกาศตัวแปลจำนวนเต็ม
    
    while (true) { //ลูปไปเรื่อนๆ
        cout << "=========" << endl;
        cout << " Student" << endl;
        cout << "=========" << endl;
        cout << "1 = Add" << endl;
        cout << "2 = Find" << endl;
        cout << "3 = Exit" << endl;
        cout << "=========" << endl;
        cout << "Choice : ";
        cin >> choice; //รับค่าจากผู้ใช้
        
        switch (choice) { //เช็กว่าตรงกับอันไหนใช้ฟังก์ชั้นนั้นๆ
            case 1:
            s.add();
            break;
            case 2:
            s.find();
            break;
            case 3:
            return 0; //จบการทำงาน
            default:
            cout << "Wrong choice" << endl;
            cout << endl; //จบบรรทัด
        }
        
        
    }
    return 0; //จบการทำงาน
}

int logic() { //ประกาศฟังก์ชัน Logic
    string a; //ประกาศตัวแปลตัวอักษร

    cout << "=======" << endl;
    cout << " Logic" << endl;
    cout << "=======" << endl;
    cout << "P = true" << endl;
    cout << "Q = flase" << endl;
    cout << "==========" << endl;
    
    cout << "1.) P && Q = ?" << endl;
    cout << "Answer : ";
    cin >> a; //รับค่าจากผู้ใช้
    if (a == "false" ) { //เช็กว่าภูกต้องไหม
        cout << "Correct answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl; //จบบรรทัด
    
    cout << "2.) P || Q = ?" << endl;
    cout << "Answer : ";
    cin >> a; //รับค่าจากผู้ใช้
    if (a == "true") { //เช็กว่าถูกต้องไหม
        cout << "Correct answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl; //จบบรรทัด
    
    cout << "3.) !P = ?" << endl;
    cout << "Answer : ";
    cin >> a; //รับค่าจากผู้ใช้
    if (a == "false") { //เช็กว่าถูกไหม
        cout << "Corect answer" << endl;
    }
    else {
        cout << "Wrong Answer" << endl;
    }
    cout << endl; //จบบรรทัด
    
    cout << "4.) !Q = ? " << endl;
    cout << "Answer : ";
    cin >> a; //รับค่าจากผู้ใช้
    if (a == "true") { //เช็กว่าถูกต้องไหม
        cout << "Correct Answer" << endl;
    }
    else {
        cout << "Wrong answer" << endl;
    }
    cout << endl; //จบบรรทัด
    
    return 0; //จบการทำงาน
}

int main() { //ฟังก์ชันหลักการทำงาน
    cout << "=========" << endl;
    cout << " Modul 3" << endl;
    cout << "=========" << endl;
    cout << "1 = Queue" << endl;
    cout << "2 = student" << endl;
    cout << "3 = Logic" << endl;
    cout << "4 = Exit" << endl;
    cout << "============" << endl;
    
    int choice; //ประกาศตัวแปลจำนวนเต็ม
    cout << "Choice : ";
    cin >> choice; //รับค่าจากผู้ใช้
    
    switch (choice) { //ตรวจดูว่าตรงกันอันไหนให้ใช้ฟังก์ชันนั้นๆ
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
        return 0; //จบการทำงาน
        default: //ถ้าไม่กับเลขไหนเลย
        cout << "Wrong choice" << endl;
        cout << endl; //จบบรรทัด
    }
    
    return 0; //จบการทำงาน
}
