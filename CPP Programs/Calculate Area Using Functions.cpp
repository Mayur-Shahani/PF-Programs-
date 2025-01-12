#include <iostream>
using namespace std;

int calArea(int length, int width);

int main() {
    int length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    int area = calArea(length, width);
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}

int calArea(int length, int width) {
    return length * width;
}

