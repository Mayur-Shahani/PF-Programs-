#include<iostream>
using namespace std;
int main()
{
	int arr[9] = {2,4,6,8,1,3,5,7,9};
	int sum = 0;
	
	for(int i  = 0; i < 9; i++)
	{
		sum = sum + arr[i];
	}
	
	cout << "The sum of all elements is : " << sum;
}