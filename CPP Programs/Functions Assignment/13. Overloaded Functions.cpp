#include <iostream> 
using namespace std;
int sum(int x, int y)
{
    return x + y; 
}
double sum(double x, double y)
{
    return x + y; 
}

int main()
{
    cout << "Sum of integers is : " << sum(9 , 11) << endl;

    cout << "Sum of doubles is : " << sum(12.54, 12.46) << endl;
}
    
