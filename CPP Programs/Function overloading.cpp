#include<iostream>
#include<math.h>
using namespace std;
void sum(int x, int y)
    {
    	cout << x+y << endl;
	}
 void sum(int x)
 {
 	cout << sqrt(x);
 }
    int main()
    {
    	int x,y;
    	x = 8;
    	y = 10;
    	sum(x,y);
    	sum(x);
	}