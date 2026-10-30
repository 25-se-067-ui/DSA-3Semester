
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
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main() {
    string name;
    int rollno;
    float marks;
    cout << "Enter first student name:";
    cin >> name;
    cout << "Enter roll number:";
    cin >> rollno;
    cout << "Enter marks:";
    cin >> marks;
    student s1(name, rollno, marks);
    cout << "Enter second student name:";
    cin >> name;
    cout << "Enter roll number:";
    cin >> rollno;
    cout << "Enter marks:";
    cin >> marks;
    student s2(name, rollno, marks);
    cout << "Enter third student name:";
    cin >> name;
    cout << "Enter roll number:";
    cin >> rollno;
    cout << "Enter marks:";
    cin >> marks;
    student s3(name, rollno, marks);
    cout << "Student Records:"<<endl;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
