#include <iostream>
using namespace std;
int st(int i )
{
	static int d = 10;
	int e = 10;
	d = d* i;
	d++;
	e = e * i;
	e++;
	cout << "The" << i << " Time Local variable value is:" << e << "\n";
	return(d);
    
}
int main()
{
	int c;
	for(c = 1; c <= 3; c++)
	{
		cout << "The" << c << " Time static variable value is:" << st(c) << "\n" ;
	}
}
