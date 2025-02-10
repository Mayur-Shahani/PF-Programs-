#include<iostream>
using namespace std;
 void swap(int* i, int* j)
 {
 	int temp = *i;
 	*i = *j;
 	*j = temp;
 }

 int main()
{
	int i = 6; 
	int j = 7;
	cout << "Before swapping";
	cout << i;
	cout << j << endl;
	swap(&i,&j);
	cout << "After swapping";
	cout << i;
	cout << j;
	}