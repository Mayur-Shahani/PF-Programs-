#include <iostream>  
using namespace std; 
void value(int x)
{
    x = x + 20;                                  
    cout << "In function value is : " << x << endl;
}

int main()
{
    int num = 15; 

    value(num);

    cout << "Outside the function value is : " << num << endl;

    return 0; 
}
