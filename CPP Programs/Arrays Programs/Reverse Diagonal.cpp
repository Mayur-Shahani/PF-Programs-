#include <iostream>
using namespace std;

int main() {
    int n = 5,m = 5;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == n - i + 1) 
			cout << m--;
            else cout << " ";
        }
        cout << endl;
    }
    return 0;
}