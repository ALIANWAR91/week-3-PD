#include<iostream>
using namespace std;
main()
{
	float vegetablepriceperkg;
	float fruitpriceperkg;
	float totalkilogramsofvegetable;
	float totalkilogramsoffruit;
	float earning;
	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>vegetablepriceperkg;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruitpriceperkg;
	cout<<"Enter total kilograms of vegetables: ";
	cin>>totalkilogramsofvegetable;
	cout<<"Enter total kilograms of fruits: ";
	cin>>totalkilogramsoffruit;
	earning=(vegetablepriceperkg*totalkilogramsofvegetable+fruitpriceperkg*totalkilogramsoffruit)/1.94;
	cout<<"Total earnings in Rupees (Rps): "<<earning;
}