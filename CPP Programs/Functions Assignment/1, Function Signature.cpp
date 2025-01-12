#include <iostream>  
using namespace std;

void num(int y)
{
    cout << "Integer is: " << y << endl; 
}

void num(double z)
{
    cout << "Double is: " << z << endl; 
}

int main()
{
    num(9);

    num(65.88);

    return 0; 
}
