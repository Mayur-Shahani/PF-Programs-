#include <iostream> 
using namespace std; 
void num(int x = 73)
{
    cout << x  << endl; 
}

int main()
{
    num();

    num(78);

    return 0;
}
