#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int choice;
    int bill = 0;
    do
    {
    	cout << endl;
        cout << "MENU" << endl;
        cout << "1.TEA (Rs 100)" << endl;
        cout << "2.Coffee (Rs 300)" << endl;
        cout << "3.Sandwich (Rs 200)" << endl;
        cout << "4.Burger (Rs 200)" << endl;
        cout << "5.Exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        	
            cout << "Your order has been added";
            cout << endl;
            bill = bill + 100;
            break;
            
        case 2:
        
            cout << "Your order has been added";
            cout << endl;
            bill = bill + 300;
            break;
            
        case 3:
        	
            cout << "Your order has been added";
            cout << endl;
            bill = bill + 200;
            break;
            
        case 4:
        
            cout << "Your order has been added";
            cout << endl;
            bill = bill + 200;
            break;
            
        case 5:
        	cout << endl;
            cout << "Thanks for using our Service" << endl;
            break;

        default:
            cout << "PLease input Choice between 1 to 4 " << endl;
            break;
        }
    } while (choice != 5);

    cout << "Your Bill is: " << "Rs " << bill ;

    return 0;
}