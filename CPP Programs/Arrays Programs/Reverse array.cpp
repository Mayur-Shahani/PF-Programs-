#include<iostream>
using namespace std;
 void reverseArr(int* arr, int size );
 int main()
 {
 	int arr[] = {4,5,6,7,10,9};
 	int size = sizeof (arr) / sizeof (arr[0]);
 	
 	cout << "Before Reversing";
 	for(int i = 0; i < size; i++)
 	{
 		cout << arr[i] << " ";
	 }
	 cout << endl;
	 reverseArr(arr,size);
	 
	  cout << "After reversing";
	  for(int i = 0; i < size; i++)
	  {
	  	cout << arr[i] << " ";
	  }
    }
 
 
 void reverseArr(int* arr, int size )
 {
 	int* start = arr;
 	int* end = arr + size - 1;
 	
 	while(start < end)
 	{
 		int temp = *start;
 		*start = *end;
 		*end = temp;
 		
 		*start++;
 		*end--;
	 }
 }