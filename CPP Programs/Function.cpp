#include<iostream>
#include<math.h>
using namespace std;
  int product(int i, int j, int k)
  {
  	return i * j * k;
  }
  int squareRoot(int x)
  {
  	return sqrt(x);
  }
  int productOfSquare(int a, int b, int c)
  {
  	int sq1 = squareRoot(a);
  	int sq2 = squareRoot(b);
  	int sq3 = squareRoot(c);
 
  	int result =  product(sq1,sq2,sq3);
  	cout << "Product of square roots is : " << result;
  }
int main()
{
	int a,b,c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter Second  number: ";
	cin >> b;
	cout << "Enter Third number: ";
	cin >> c;
	productOfSquare(a,b,c);
}
 