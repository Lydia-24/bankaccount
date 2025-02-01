#include<iostream>
#include<string>
using namespace std;
class car{
	public:
		string brand;
		string model;
		float price;
		int mileage;
		 
		 string cardetails1(){
		 	return brand,model;
		 }
		float cardetail2(){
			return price;
		}
		int cardetail3(){
			return mileage;
		}
};
int main(){
	char brand,model;
	int price,mileage;
	cout<<"brand:"<<endl;
	cin>>brand;
	cout<<"model:"<<endl;
	cin>>model;
	cout<<"price:"<<endl;
	cin>>price;
	cout<<"mileage:"<<endl;
	cin>>mileage;
	return 0;
}