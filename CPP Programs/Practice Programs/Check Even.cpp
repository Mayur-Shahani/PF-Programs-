#include<iostream>
using namespace std;
 bool isEven(int num)
 {
 	if(num % 2 == 0)
 	{
 		return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 }
int main()
{
	int a = 57;
    cout <<isEven(a);
}