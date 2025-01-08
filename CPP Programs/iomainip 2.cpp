#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265359;
    int num = 123;

    // Escape Sequences
    cout << "Hello\tWorld\n";
    cout << "This is a new line.\n";
    

    // <iomanip> Manipulators
    cout << setw(20) << left << num << "\t" << setprecision(8) << pi << endl;
    cout << setfill('*') << setw(20) << right << num << "\n";

    return 0;
}
