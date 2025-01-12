#include <iostream>
using namespace std;
void message() {
    cout << "Function Pointer" << endl;
}

int main() {
    
    void (*functionPtr)();

    
    functionPtr = message;

   
    functionPtr();

    return 0;
}

