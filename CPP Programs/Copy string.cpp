#include<iostream>
using namespace std;
int main()
{
	char ch[100] = "Mayur";
	char ch2[100];
	
	for(int i = 0; ch[i] != '\0'; i++)
	{
		ch2[i] = ch[i];
	}
	
	for(int i = 0; ch[i]!='\0'; i++)
	{
		cout << ch2[i];
	}
}