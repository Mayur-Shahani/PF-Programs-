#include<iostream>
#include<string>
using namespace std;

 struct student{
 	string name;
 	int age;
 	float marks[6];
 	
 };
 
 int udf(student s1)
 {
 	int sum = 0; 
 	float average;
 	for(int i = 0; i <= 5; i++)
 	{
 		sum += s1.marks[i];
    }
    
    average = sum / 6;
    return average;
 }
int main()
{
	student s1;
	cout << "Enter student name: ";
	cin.ignore();
	getline(cin,s1.name);
	cout << "Enter student age: ";
	cin >> s1.age;
	for(int i = 0; i <=5; i++)
	{
		cout << "Enter student marks " << i + 1 << " : "  ;
		cin >> s1.marks[i];
	}
	
	cout << udf(s1);
	
 	
}