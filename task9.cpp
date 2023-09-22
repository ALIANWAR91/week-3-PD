#include<iostream>
using namespace std;
main()
{
	int number;
	int mode1;
	int mode2;
	int mode3;
	int division1;
	int division2;
	int division3;
	int sum;
	cout<<"Enter a 4-digit number: ";
	cin>>number;
	mode1=number%10;
	division1=number/10;
	mode2=division1%10;
	division2=division1/10;
	mode3=division2%10;
	division3=number/1000;
	sum=mode1+mode2+mode3+division3;
	cout<<"Sum of the individual digits: "<<sum;
}
																															
