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
	student s("daniyal",67,85.0);
	s.display();
}