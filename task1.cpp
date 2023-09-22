#include<iostream>
using namespace std;
main()
{
	cout << "Enter the number of sides of the polygon: ";
	int noofsides;
	cin >> noofsides;
	int sum;
	sum=(noofsides-2)*180;
	cout << "The sum of internal angles of a "<<noofsides<<"-sided polygon is: "<<sum<<" degrees";
}