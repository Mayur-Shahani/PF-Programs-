#include <iostream>
using namespace std;

int main() {
    int number;
    int oddCount = 0, evenCount = 0;

    cout << "Enter numbers (0 to stop): \n";
    while (true) {
        cin >> number;
        if (number == 0) break;
        if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Total odd numbers: " << oddCount << endl;
    cout << "Total even numbers: " << evenCount << endl;

    return 0;
}

