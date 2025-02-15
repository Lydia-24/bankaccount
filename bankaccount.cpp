
//a program on encapsulation
/*Author:Lydia Kamau
Reg No:BBIT-05-0158/2024
 date:Feb 10 2025 */

#include<iostream>
#include<string>
using namespace std;

class BankAccount {
	private :
	
	string accountholder;
	double balance;
	
	public :
		BankAccount(string accountholder,double balance){
		accountholder=accountholder;
		balance=balance;
		}
	void setaccountholder(string accountholder){
		accountholder=accountholder;
	}
	string getaccountholder(){
		return accountholder;
	}
	void setbalance(double balance){
		balance = balance;
	}
	double getbalance(){
		return balance;
	}
};

int main(){
	BankAccount acc("LYDIA" ,100000);
	cout<<"accountholder:"<<acc.getaccountholder()<<endl;
	cout<<"balance:"<<acc.getbalance()<<endl;
	return 0;
}