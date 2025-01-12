#include <iostream>
using namespace std;

int multiply(int a, int b);

int main() {
    int x = 5, y = 10;
    int result = multiply(x, y);
    cout << "The result is: " << result << endl;
    return 0;
}

int multiply(int x, int y) {
    cout << "Multiplying " << x << " and " << y << endl;
    return x * y;
}

