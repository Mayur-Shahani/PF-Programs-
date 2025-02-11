#include<iostream>
using namespace std;
int main()
{
	char ch[] = "Motivation";
	int size = sizeof(ch) / sizeof(ch[0]) - 1;

	for(int i = size - 1; i >= 0; i-- )
	{
		cout << ch[i];
	}
}