#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a  number: ";
    cin >> number;

    if (number < 0) {
        goto mistake; 
    }

    cout << "You entered a number: " << number << endl;
    goto end; 

mistake:
    cout << "Error: You entered a negative number" << endl;

end:
    cout << "Program Exited " << endl;
 
    return 0;
}