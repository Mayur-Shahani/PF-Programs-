#include<iostream>
using namespace std;
int func(int x, int y)
{
	if(x == 1 || y == 0)
	{
		return 1;
	}
	return x * func(x , y - 1);
}
int main() 
{
    int base,power; 
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Power: ";
    cin>>power;
    cout<< base << power << func(base,power) << endl; 
    return 0;
}