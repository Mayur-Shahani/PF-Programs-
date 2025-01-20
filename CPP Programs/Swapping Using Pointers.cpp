#include<iostream>
using namespace std;
int main()
{
	int num1 = 10 , num2 = 20;
	int *x,*y;
	cout<<"The Value Before swapping is : "<< num1 <<" and "<< num2 << endl;
	x = &num1;
	y = &num2;
    int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	cout<<"The Value After swapping is : "<< *x <<" and "<< *y;
	return 0;
}