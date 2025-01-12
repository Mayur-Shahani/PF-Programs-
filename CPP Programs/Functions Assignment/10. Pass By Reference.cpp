#include <iostream>  
using namespace std;
void modifyValue(int &x)
{
    x += 10; 
}

int main()
{
    int num = 5; 

    modifyValue(num);

    cout << "After modification: " << num << endl;

    return 0;
}
