#include<iostream>
using namespace std;
int main()
{
  int arr[11];

  for (int i = 0; i<=10; i++)
  {
  	cout << "Enter number " << i+1 << " : ";
  	cin >> arr[i];
  }
    int* p = arr;
  int min = *p;
  for(int i = 1; i<=10; i++)
  {
  	p++;
  	if(*p < min)
  	{
  		min = *p;
	  }
  }
  cout << "Minimum number is: " << min;
  
}