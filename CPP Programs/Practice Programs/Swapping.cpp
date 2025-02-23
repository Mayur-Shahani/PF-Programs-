#include<iostream>
using namespace std;
 swap(int* a, int* b)
 {
 	int temp = *a;
 	*a = *b;
 	*b = temp;
 }
 int main()
 {
 	int a,b;
 	a = 6;
 	b = 7;
 	cout << a << " " << b << endl;
    swap(a,b);
 	cout << a << " " << b;
 }