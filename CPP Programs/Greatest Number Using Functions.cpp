#include<iostream>
using namespace std;
int greatestNum(int a,int b,int c){
	if(a > b && a > c){
		return a;
	}
	else if(b > a && b > c){
		return b;
	}
	else{
		return c;
	}

}

int main()
{
	int x,y,z,greater;
	cout << "Enter first integer: ";
	cin >> x;
	cout << "Enter Second Integer: ";
	cin >> y;
	cout << "Enter Third Integer: ";
	cin >> z;
	greater = greatestNum(x,y,z);
	cout << "The Greater Number is " << greater ;
	
}
