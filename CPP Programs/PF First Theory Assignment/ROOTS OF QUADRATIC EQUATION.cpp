#include <iostream>
#include <math.h> 
using namespace std;

int main() {
    float a, b, c;
    float rt1, rt2, disc;

   
    cout << "Enter co-efficients a : ";
    cin >> a ;
    
    cout << "Enter co-efficient b : ";
    cin >> b;
    
    cout << "Enter co-efficient c : ";
	cin >> c; 
    
    disc = b * b - 4 * a * c;

    if (disc > 0) {
        
        rt1 = (-b + sqrt(disc)) / (2.0 * a);
        rt2 = (-b - sqrt(disc)) / (2.0 * a);

      
        cout << "The roots of the quadratic equation are real and unequal." << endl;
        cout << "root1 = " << rt1 << endl;
        cout << "root2 = " << rt2 << endl;
    } else if (disc == 0) {
        
        rt1 = rt2 = -b / (2.0 * a);
        cout << "The roots of the quadratic equation are real and equal." << endl;
        cout << "root1 = root2 = " << rt1 << endl;
    } else {
        
        cout << "The roots of the quadratic equation are complex and unequal." << endl;
        cout << "No real roots exist." << endl;
    }

    return 0;
}
