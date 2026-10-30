#include<iostream>
using namespace std;
class book{
	public:
		string title;
		string author;
		int price;
		book(string t, string a, int p){
			title=t;
			author=a;
			price=p;
		}
		void display(){
			cout<<"book title:"<<title<<endl;
			cout<<"book author:"<<author<<endl;
			cout<<"book price:"<<price<<endl;
		}
};
int main(){
	book b("math","daniyal",1245);
	b.display();
}
