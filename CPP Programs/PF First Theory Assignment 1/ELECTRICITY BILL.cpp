#include <iostream>
using namespace std;

int main() {
    float previousReading, currentReading, unitsConsumed, grossBill, netBill;
    
   
    cout << "Enter the previous reading: ";
    cin >> previousReading;
    cout << "Enter the current reading: ";
    cin >> currentReading;
    
    
    unitsConsumed = currentReading - previousReading;
    
    
    if (unitsConsumed <= 300) {
        grossBill = unitsConsumed * 4;
        
        netBill = grossBill * 0.97;
    } else if (unitsConsumed <= 400) {
        grossBill = unitsConsumed * 6;
        netBill = grossBill;
    } else {
        grossBill = unitsConsumed * 7;
       
        netBill = grossBill * 1.04;
    }
    
   
    cout << "Total units consumed: " << unitsConsumed << endl;
    cout << "Gross Bill: Rs. " << grossBill << endl;
    cout << "Net Bill after adjustments: Rs. " << netBill << endl;

    return 0;
}
