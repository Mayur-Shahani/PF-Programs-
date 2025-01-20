#include<iostream>
using namespace std;
int main()
{
	int x,y, product = 1;
	
	cout << "Enter Starting Number: ";
	cin >> x;
	cout << "Enter Ending Number: ";
	cin >> y;
	for(int i = x; i <=y; i++)
	{
		if(i % 2 == 0)
		{
			cout << i << endl;
		}
		else
		{
			product = product * i;
		}
	}
	cout << "The Product of All odd Numbers between " << x << " and " << y << " are " << product;
	return 0;
}