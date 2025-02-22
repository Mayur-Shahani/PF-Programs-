#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
   cout << "Enter a positive integer: ";
   cin >> n;
   if(n <= 0)
    {
      cout << "Invalid input! Please enter a positive integer." << endl;
        }
    else
	{
    cout<<"Number\tSquare\tCube" << endl;
    for(int i=1;i<=n;i++)
    {
      cout << i << "\t" << pow(i,2) << "\t" << pow(i,3) << endl;
         }
	 }
    return 0;
}