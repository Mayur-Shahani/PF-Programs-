#include<iostream>
using namespace std;
 void maxMin(int* arr, int* size, int* max, int *min );
 int main()
 {
 	int arr[] = {13,23,45,32,6,78,7};
 	int size = sizeof (arr) / sizeof (arr[0]);
 	int max,min;
 	maxMin(arr,&size,&max,&min);
 	
 	cout << "Maximum number is : " << max << endl;
 	cout << "Minimum number is : " << min;
 	} 
 	void maxMin(int* arr, int* size, int* max, int *min )
 {
 	*max = *arr;
 	*min = *arr;
 	
 	for(int i = 1; i < *size; i++)
 	{
 		if(*(arr + i) < *min)
 		{
 			*min = *(arr + i);
		 }
		 
		 if(*(arr + i) > *max)
		 {
		 	*max = *(arr + i);
		 }
	 }
 	
 }