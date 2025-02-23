#include<iostream>
using namespace std;
 int maxOfThree(int a, int b, int c)
 {
 	if(a > b && a > c)
 	{
 		return a;
	 }
	 if(b > a && b > c)
 	{
 		return b;
	 }
	 if(c > a && c > b)
 	{
 		return c;
	 }
 }
int main()
{
	int a,b,c;
	a = 4;
	b = 6; 
	c = 8;
	cout << maxOfThree(a,b,c);
}