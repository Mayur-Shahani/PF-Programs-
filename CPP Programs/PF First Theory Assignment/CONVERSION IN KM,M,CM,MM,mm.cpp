#include<iostream>
using namespace std;

int main()
{
	double miles,kilometers,meters,centimeters,millimeters,micrometers;
	
	cout << "Enter the distance between SHU and your home in miles: ";
	cin >> miles;
	
	kilometers  = miles * 1.60934;
	meters      = kilometers * 1000;
	centimeters = meters * 100;
	millimeters = centimeters * 10;
	micrometers = millimeters * 1000;
	
	cout << "Your distance in kilometers is : " << kilometers << endl;
	cout << "Your distance in meters is : " << meters << endl;
	cout << "Your distance in centimeters is : " << centimeters << endl;
	cout << "Your distance in millimeters is : " << millimeters << endl;
	cout << "Your distance in micrometers is : " << micrometers << endl;
}
