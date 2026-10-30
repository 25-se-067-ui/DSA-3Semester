
#include<iostream>
using namespace std;

class student {
public:
    string name;
    int rollno;
    float marks;
    student(string n, int r, float m) {
        name = n;
        rollno = r;
        marks = m;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
        
    }
};
int main() {
    student s1("daniyal", 101, 85.5);
    student s2("uzair", 102, 90.0);
    student s3("abdullah", 103, 95.5);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
