#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int x = 0, y = 1, next;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << x << " ";
        next = y + y;
        x = y;
        y = next;
    }
    cout << endl;
}

int main() {
    int num;

    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        generateFibonacci(num);
    }

    return 0;
}