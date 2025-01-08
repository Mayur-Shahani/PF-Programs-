#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double speedOfLight = 299792.458;
	int number = 435;
	
	cout << setw(15) << left << number << "\t" << setprecision(8) << speedOfLight << endl;
	
	cout << setfill('*') << setw(25) << right << number << "\n" << endl;
	
	
 } 
