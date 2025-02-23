#include<iostream>
using namespace std;
 struct employee{
 	int id;
 	string name;
 	int salary;
 };
 employeeDetails()
 {
 	struct employee emp;
 	
 	cout << "Enter Your Id : ";
 	cin >> emp.id;
 	cout << "Enter Your Name : ";
 	cin.ignore();
 	getline(cin,emp.name);
 	cout << "Enter Your Salary : ";
 	cin >> emp.salary << endl;
 	
 	
 	cout << "**** Employee Details **** " << endl;
 	cout << emp.id << endl;
 	cout << emp.name << endl;
 	cout << emp.salary;
 }
 int main()
 {
 	employeeDetails();
 }