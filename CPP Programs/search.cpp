#include<iostream>
using namespace std;
 int arr[10] = {1,2,3,4,77,6,7,8,9,10};
 int udf()
 {
 	int search;
 	cout << "Enter the number that you search: ";
 	cin >> search;
 	
 	for( int i = 0; i <= 9; i++)
 	{
 		if(arr[i] == search)
 		{
 			search = arr[i];
 			return i;
 			
		}
	}
	 cout << "Number not found";
	 return -1;
}
 int main()
 {
 	cout << udf();
 }