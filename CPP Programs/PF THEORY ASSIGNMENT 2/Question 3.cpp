//A program that takes input of integers repeatedly until user enters 
//a zero digit then it prints the number of positive and negative integers.  
#include<iostream>
using namespace std;
int main()
{
	int x;
	int p = 0;
	int n = 0;
	do{
		cout << "Enter a number: ";
		cin >> x;
			if(x >= 0)
	{
	      p++;
	}
	else
	{
		n++;
	}
		
	}while(x != 0);
  	
  	cout << "The Positive Numbers are : " << p << endl;
  	cout << "The Negative Numbers are : " << n << endl;
  	
	
}