#include<iostream>
using namespace std;
   void square(int x);
   void cube(int x);
   void print(int x);
   void table(int x);
int main()
{
	int num, choice;
	cout << "Enter a number : ";
	cin >> num;
	cout << "MENU" << endl;;
	cout << "1. Square" << endl;;
	cout << "2. Cube" << endl;;
	cout << "3. Print 50 time" << endl;;
	cout << "4. Table" << endl;;
	cout << "Enter your choice: ";
	cin >> choice;
	 switch(choice)
	 {
	 	case 1:
	 		square(num);
	 		break;
	 	case 2:
	 		cube(num);
	 		break;	
	 	case 3:
	 		print(num);
	 		break;
		case 4:
	 		table(num);
	 		break;
		default:
		   cout << "Invalid Number";	 	 	
	 }

}

 void square(int x)
 {
 	cout << x * x;
 }
 void cube(int x)
 {
 	cout << x * x * x;
 }
 void print(int x)
 {
 	for(int i = 0; i < 50; i++ )
 	{
 		cout << x << endl; 
	 }
 }
 void table(int x)
 {
 	for(int i = 1; i <= 10; i++)
 	{
	 cout << x << "*" << i << "=" <<  x * i << endl;
    }
 }