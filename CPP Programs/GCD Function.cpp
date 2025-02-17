
#include<iostream>
using namespace std;
int gcd(int x,int y)
{   
    while(y != 0)
    {  int temp = y;
	   y = x % y;
	   x = temp;
	}
    return x;
}
int main()
{
    int num1,num2;
    cout << " Enter First Number: ";
    cin >> num1;
    cout << " Enter Second Number : ";
    cin >> num2;
    
    cout << gcd(num1,num2) ;
    return 0;
}
