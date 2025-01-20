//write a program in C++ to make such a pattern like right angle triangle using 
//number which will repeat the number for that row. Go to the editor
#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	while(i <= 5)
	{
		
		int j = 1;
		while(j <= i)
		{
			cout << i;
			j++;
		}
		cout << endl;
		i++;
	}

}