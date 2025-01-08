#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int num1,num2;
	
	try{
	
    cout << "Enter your First Integer: ";
    if(!(cin >> num1))
    {
    	throw "Input Number Is Not An Integer. ";
	}
	
	cout << "Enter your Second Integer: ";
    if(!(cin >> num2))
    {
    	throw "Input Number Is Not An Integer. ";
	}
	
    int sum;
    sum = num1 + num2;
    cout << sum;
    }
    catch(const char* error)
    {
    	cout << "Error:  " << error << endl;
	}
}