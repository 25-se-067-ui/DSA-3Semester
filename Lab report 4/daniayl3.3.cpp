#include<iostream>
using namespace std;

class student{
	public:
	string name;
	int rollno;
	float marks ;
	student(string n,int r,float m){
		name=n;
		rollno=r;
		marks=m;
	}
	void display(){
		cout<<"name:"<<name <<"rollno:"<<rollno <<"marks:"<<marks <<endl;
	}
};
int main(){
	string name;
	int rollno;
	float marks;
	cout<<"enter your name:";
	cin>>name;
	cout<<"enter your rollno:";
	cin>>rollno;
	cout<<"enter your marks:"; 
	cin>>marks;
	student s(name,rollno,marks);
	s.display();
	
	
	s.display();
}