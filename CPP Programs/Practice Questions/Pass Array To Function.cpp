#include<iostream>
using namespace std;
 void pass(int arr[])
 {
 	for(int i = 0; i <= 4; i++)
 	{
 		cout << arr[i] << " ";
	 }
 }
int main()
{
	int arr[5] = {1,2,3,4,5};
	pass(arr);
}