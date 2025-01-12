#include <iostream>
using namespace std;
int evenOdd(int a ){
	if(a % 2 == 0){
		return 0;
	} 
	else{
		return 1;
	}
}
int main()
{
	int a,result;
	cout << "Enter a Number:  ";
	cin >> a ;
	
	result = evenOdd(a);
	if(result == 0){
		cout << "Even \n";
	}
	else{
		cout << "Odd \n";
	}

	
}
