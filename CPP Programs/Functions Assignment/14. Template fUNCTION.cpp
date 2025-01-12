#include <iostream> 
using namespace std;
template <typename tem>
tem findMax(int a, int b) {
    return (a > b) ? a : b; 
}

int main() {
   
    cout << "Max of 4 and 7: " << findMax(4, 7) << endl;

  
    cout << "Max of 3.5 and 2.5: " << findMax(3.5, 2.5) << endl;

    return 0;
}
