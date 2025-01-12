#include<iostream>
#include<string.h>
using namespace std;
struct student {
	char name[100];
	int rollNumber;
	float marks[3];
}students;

void addStudent() {
	cout << "Enter your name : ";
	cin >> students.name; 
	cout << "Enter your roll number : ";
	cin >> students.rollNumber;
	for (int i = 0; i <= 2; i++)
	{
		cout << " Enter your "  << i + 1 <<  " Course marks : ";
		cin >> students.marks[i];
	}
	cout << endl;
 }
void displayStudents()
{
	cout << endl;
	cout << "Your Name is : " << students.name << endl;
	cout << "Your rollNumber is : " << students.rollNumber << endl;
	for (int i = 0; i <= 2; i++)
	{
		cout << "Your  " << i + 1 << " Course  marks is ";
		cout << students.marks[i] << endl;
	}
	cout << endl;
	
}
void sum()
{
	cout << endl;
	int sum = 0;
	for (int i = 0; i <= 2; i++)
	{
		sum += students.marks[i];
	}
	cout << "Your Total Marks is :" << sum;
}
int main()
{
	int choice;
	do {
		
		cout << "1. Add Student " << endl;
		cout << "2. Show Student" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice : " ;
		cin >> choice;
		switch (choice)
		{
		case 1:
			addStudent();
			break;
		
		case 2:
			displayStudents();
			break;
		case 3:
			cout << "Program Exits ";
			break;
		default:
			cout << "Invalid choice!!";
			break;
		}
	} while(choice != 3);
	
	return 0;
}