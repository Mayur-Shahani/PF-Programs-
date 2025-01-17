#include <iostream>
using namespace std;

int main() {
    char gender, city;
    int age;
    double salary;

    
    cout << "Insert gender : ";
    cin >> gender;
    cout << "Insert age : ";
    cin >> age;
    cout << "Insert city : ";
    cin >> city;
    cout << "Insert present salary : ";
    cin >> salary;

   
    if ((gender == 'F' || gender == 'f') && (age >= 25 && age <= 35) && (city == 'K' || city == 'k' || city == 'H' || city == 'h')) {
        salary += 2000;
        cout << "You are eligible for a salary increase. Net salary: " << salary << endl;
    } else if ((gender == 'M' || gender == 'm') && (age >= 25 && age <= 40) && (city == 'S' || city == 's' || city == 'G' || city == 'g')) {
        salary += 2500;
        cout << "You are eligible for a salary increase. Net salary: " << salary << endl;
    } else {
        cout << "No salary increase: " << salary << endl;
    }

    return 0;
}
