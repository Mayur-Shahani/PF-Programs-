#include <iostream>
using namespace std;
 int sum(int a , int b);
 int sub(int a , int b);
 int main() 
{
	int x,y,add,subtract;
	cout << "Enter first Number: ";
	cin >> x;
	cout << "Enter Second Number: ";
	cin >> y;
	add = sum(x,y);
	subtract = sub(x, y);
	
	cout << "The sum of x and y is " << add << endl;
	cout << "The substraction of x and y is " << subtract;
	
	
	
}
  int sum(int a , int b)
  {
  	return a + b;	
  }
  int sub(int a , int b)
  {
  	return a - b;
  }
