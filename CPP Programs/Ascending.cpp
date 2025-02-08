#include<iostream>
using namespace std;
int main()
{
	int arr[7] = {3,1,5,9,4,7,11};
	
	for(int i = 0; i < 7 - 1; i++)
	{
		for(int j = i + 1; j < 7; j++)
		{
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int k = 0; k <7; k++)
	{
		cout << arr[k] << endl;
	}
}