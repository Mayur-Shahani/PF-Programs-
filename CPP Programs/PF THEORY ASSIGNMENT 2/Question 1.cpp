#include<iostream>
using namespace std;
int main()
{
	int num,i,sum = 0;
	cout << "Input Value  of nth term:  ";
	cin >> num;
	i = 1;
	while(i <= num)
	{
	  	
	  cout << i << "*" << i << "=" << i * i << endl;
	  sum = sum + i * i;
	  i++;
}
  cout << "The sum of the above series is:" << sum;
}