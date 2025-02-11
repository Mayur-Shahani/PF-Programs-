#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    
    if(ch >= 'a' && ch <= 'a')
    {
    	ch = ch - 32;
	}
	cout << ch;
}