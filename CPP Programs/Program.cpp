#include<iostream>
using namespace std;
struct student{
	int id;
	string name;
	float gpa;
	
};
  void udf(student s[2])
  {
  	for(int i = 0; i < 2; i++)
  	{
  		cout << "Your " << i+1 << "Student name is:" << s[i].name << endl;
  		cout << "Your" << i+1 << "Student id is : " << s[i].id <<endl;
        cout << "your " << i+1 << "Student gpa is : " << s[i].gpa << endl;  	     	
	  }
  }
int main()
{
	student s[2];
	for(int i = 0; i <2; i++)
	{
	cout << "Enter your " << i+1 << " student name: ";
	cin.ignore();
	getline(cin,s[i].name);
	cout << "Enter your "<< i + 1 << " student id: ";
	cin >> s[i].id;
	cout << "Enter your " << i + 1 << " student GPA:";
	cin >> s[i].gpa;
    }
    
    udf(s);
	
	}