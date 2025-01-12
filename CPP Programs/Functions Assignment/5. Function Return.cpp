#include <iostream>  
using namespace std; 
int intValue()
{
    return 42; 
}
double doubleValue()
{
    return 3.14; 
}
void returnVoid()
{
    cout << "Void Function" << endl; 
}

int main()
{
    cout << "Integer value is : " << intValue() << endl;

    cout << "Double: " << doubleValue() << endl;

    returnVoid();

    return 0; 
}
