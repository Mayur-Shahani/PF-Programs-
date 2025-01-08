#include <iostream>
using namespace std;

int main() {
    int numerator = 10;
    int denominator = 0;  // Setting denominator to zero

    int result = numerator / denominator;  // This will cause a runtime error
    cout << "Result: " << result << endl;

    return 0;
}

