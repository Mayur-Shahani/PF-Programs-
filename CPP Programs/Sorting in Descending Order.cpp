
#include<iostream>
using namespace std;
int main() {
    int temp;
    int arr[4] = { 2,9,1,11 };
    for (int j = 3;j >= 1;j--) {
        for (int i = 0;i < j;i++) {
            if (arr[i] < arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0;i < 4;i++) {

        cout << arr[i] << " ";
    }


    return 0;
}