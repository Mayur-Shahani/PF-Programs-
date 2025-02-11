#include<iostream>
using namespace std;

 int length(char name[])
 {
 	int i;
    while(name[i] != '\0')
    {
    	i++;
	}
	return i;
 }
 
 void str()
 {
 	int result;
 	char name[100];
 	cout << "Enter your name : ";
 	cin.getline(name,100);
 	 length(name);
   result = length(name);
   cout << result;
 }
 
 int main()
 {
 	str();
 }