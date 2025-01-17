#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    float a = 2.3; 
    float b = -4.5; 
    int c;

    cout << "Enter the integer value for c: ";
    cin >> c;


    float discriminant = b * b - 4 * a * c;

   
    if (discriminant >= 0) {
        
        float x1 = (-b + sqrt(discriminant)) / (2 * a);
        float x2 = (-b - sqrt(discriminant)) / (2 * a);

       
        cout << "The roots of the quadratic equation are: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else {
        
        cout << "The quadratic equation has no real roots." << endl;
    }

    return 0;
}
