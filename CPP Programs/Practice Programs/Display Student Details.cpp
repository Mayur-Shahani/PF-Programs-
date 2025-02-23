#include<iostream>
using namespace std;
 struct student{
 	string name;
 	int rollNumber;
 	int marks;
 };
 
 void displayDetails(student std)
 {
 	cout << std.name << endl;
 	cout << std.rollNumber << endl;
 	cout << std.marks;
 }
 int main()
 {
 	student std;
 
 	cout << "Enter roll number : ";
 	cin >> std.rollNumber;
 	cout << "Enter your Name : ";
 	cin.ignore();
 	getline(cin,std.name);
 	cout << "Enter Your Marks : ";
 	cin >> std.marks;
 	displayDetails(std);
 }