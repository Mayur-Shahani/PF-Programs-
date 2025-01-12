#include <iostream>
using namespace std;

int main() {
   
    int totalCreditHours = 0;
    float totalPoints = 0.0;


    int creditHours[5];
    float gradePoints[5];

    
    for (int a = 0; a < 5; ++a) {
        cout << "Enter credit hours for course " << a + 1 << ": ";
        cin >> creditHours[a] ;
        cout << "Enter grade point for course " << a + 1 << ": ";
        cin >> gradePoints[a];
        cout << endl;

       
        totalPoints += creditHours[a] * gradePoints[a];
        totalCreditHours += creditHours[a];
    }

   float SGPA = totalPoints / totalCreditHours;
   cout << "The SGPA  is: " << SGPA << endl;
}
