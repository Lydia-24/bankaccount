//program to calculate fine for overdue books
/*Name:Lydia Kamau
  Reg no:BBIT-05-0158/2024
  DATE:Jan 21 2025*/

#include<iostream>
#include<string>
using namespace std;
int main(){
int bookID,dueDate,returnDate,overdueDays,fine;
cout<<"bookID"<<endl;
cin>>bookID;
cout<<"dueDate"<<endl;
cin>>dueDate;
cout<<"returnDate"<<endl;
cin>>returnDate;
overdueDays=returnDate-dueDate;
cout<<"overdueDays"<<endl;
cin>>overdueDays;
if(overdueDays<=7)
{
cout<<"charge per day=ksh20"<<endl;
}
else(overdueDays=8-14);
{
cout<<"charge per day=ksh50"<<endl;
}
if(overdueDays>=15)
{
cout<<"charge per day=ksh100"<<endl;
}
return 0;
}