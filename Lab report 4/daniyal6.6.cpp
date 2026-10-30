#include<iostream>
using namespace std;
class bankaccount{
	public:
		int cash;
		bankaccount(int c ){
			cash = c;
		}
		void withdraw(int amount){
			if(amount<=0){
				cout<<"invalid amount";
			}
			else if ( amount>cash){
				cout<<"insufficient balance";
			}
			else{
				cash=cash-amount;
				cout<<"withdrawl successful"<<endl;
				cout<<"remaining cash:"<<cash;
			}
		}
};
int main(){
	bankaccount b(20000);
	int amount;
	cout<<"enter withdrawl amount:";
	cin>>amount;
	b.withdraw(amount);
}