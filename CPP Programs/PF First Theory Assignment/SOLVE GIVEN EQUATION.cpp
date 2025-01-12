#include <iostream>
using namespace std;

int main() {
   
    double a, b, c, x, y, d;
    double A;

    
    cout << "Enter values for a : ";
    cin >> a ;
    
    cout << "Enter values for b : ";
    cin >> b ;
    
    cout << "Enter values for c : ";
    cin >> c ;
    
    cout << "Enter values for x : ";
    cin >> x ;
    
    cout << "Enter values for y : ";
    cin >> y ;
    
    cout << "Enter values for d : ";
    cin >> d ;

   
    A = 7 * 7 * b * (x * y + a) / c - 0.8 + 2 * b * d * (x + a) * (1 / y);

    
    cout << "The value of A is: " << A << endl;
}

 
