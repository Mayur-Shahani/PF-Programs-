#include <iostream>
#include <iomanip> // Include the iomanip header
using namespace std;
int main() {
    // Sample data
    string name = "Alice";
    double score = 95.56789;
    int age = 23;

    // Header
    std::cout << left << std::setw(15) << "Name"
              << setw(10) << "Age"
              << setw(10) << "Score" << std::endl;

    // Separator
   cout << setfill('-') << setw(35) << "" << setfill(' ') << endl;

    // Data output
    std::cout << left << std::setw(15) << name
              << setw(10) << age
              << fixed << setprecision(2) << setw(10) << score << endl;

    return 0;
}

