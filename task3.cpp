#include<iostream>
using namespace std;
main()
{
	cout << "Enter Initial Velocity (m/s): ";
	float initialvelocity;
	cin >> initialvelocity;
	cout << "Enter Acceleration (m/s^2): ";
	float Acc;
	cin >> Acc;
	cout << "Enter Time (s): ";
	float time;
	cin >> time;
	float fv;
	fv=Acc*time+initialvelocity;
	cout << "Final Velocity (m/s): "<<fv;
}