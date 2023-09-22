#include<iostream>
using namespace std;
main()
{
	cout << "Number of Minutes: ";
	float min;
	cin >>min;
	cout << "Frames per Second: ";
	float frames;
	cin >>frames;
	float noofframes;
	noofframes=min*60*frames;
	cout << "Total Number of Frames: "<<noofframes;
}