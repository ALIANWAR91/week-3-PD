#include<iostream>
using namespace std;
main()
{
	string name;
	float adult;
	float child;
	int noadult;
	int nochild;
	float charity;
	float totalsale;
	float donation;
	float remaining;
	cout << "Enter the movie name: ";
	cin >>name;
	cout << "Enter the adult ticket price: $";
	cin>>adult;
	cout << "Enter the child ticket price: $";
	cin>>child;
	cout<<"Enter the number of adult tickets sold: ";
	cin>>noadult;
	cout<<"Enter the number of child tickets sold: ";
	cin>>nochild;
	cout<<"Enter the percentage of the amount to be donated to charity: "; 
	cin>>charity;
	cout<<"Movie: "<<name<<endl;
	totalsale=adult*noadult+child*nochild;
	cout<<"Total amount generated from ticket sales: $"<<totalsale<<endl;
	donation=totalsale*charity/100;
	cout<<"Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	remaining=totalsale-donation;
	cout<<"Remaining amount after donation: $"<<remaining;
}