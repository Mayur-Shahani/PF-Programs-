#include <iostream>
using namespace std;
int main()
{
    int attempt = 3;
    int pass = 1234;
    int enteredPassword;
    
    do
    {
    	cout << "Enter your password : " ;
        cin >> enteredPassword;
        if (enteredPassword == pass)
        {
            cout << "Access Granted";
            break;
        }
        else if (attempt == 0)
        {
            cout << "Access Denied";
            break;
        }
        else
        {

            cout << "Incorrect password try again you have " << attempt << " Attempt left" << endl;
            attempt = attempt - 1;
        }
    } while (attempt != -1);
    return 0;
}