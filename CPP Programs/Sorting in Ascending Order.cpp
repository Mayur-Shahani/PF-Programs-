#include<iostream>
using namespace std;

int main() {
    int arr[4] = { 4, 9, 1, 3 };
    int temp;

    for (int i = 3; i >= 1; i--) {
        for (int j = 0; j < i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}