#include<iostream>
using namespace std;
 int largest(int a,int b, int c)
 {
 	if(a > b && a > c)
 	{
 		return a;
	 }
 	else if(b > a && b > c)
 	{
 		return b;
	 }
	 else{
	 	return c;
	 }
 }
int main()
{
	int a,b,c,result;
	cout << "Enter first Number: ";
	cin >> a;
	cout << "Enter Second Number: ";
	cin >> b;
	cout << "Enter Third Number: ";
	cin >> c;
	result = largest(a,b,c);
	cout << result;
}
