#include<iostream>
using namespace std;
int main()
{
	int arr[5][6] = {{1,2,3,4,5},
					{6,7,8,9,10},
					{11,12,13,14,15},
					{16,17,18,19,20},
					{21,22,23,24,25}};
	int sum = 0;
	for(int i =0; i<=4; i++)
	{
		for(int j = 0; j <= 5; j++)
		{
			if(arr[i][j] % 2 == 0 && arr[i][j] % 7 == 0)
			{
				sum = sum + arr[i][j];
			}
		}
	}
					
		cout << sum;			
}