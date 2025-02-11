#include<iostream>
using namespace std;
  void swap( int* x, int* y)
  {
	int temp = *x;
	*x = *y;
	*y = temp;
	
}
int main()
{
	int a = 8;
	int b = 6;
	int* c = &a;
	int* d = &b;
	
	cout << "Before Swapping" << endl;
	cout << a << " " << b << endl;
	
	swap(c,d);
	
	cout << "After Swapping" << endl;
	cout << *c << " " << *d;
}