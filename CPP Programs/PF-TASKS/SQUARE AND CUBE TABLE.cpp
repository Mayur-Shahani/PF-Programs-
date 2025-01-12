 #include <iostream>
 #include <iomanip> 
using namespace std;
 
 int main() {
     int n;
 
     //user enter a positive integer
     cout << "Enter a positive integer: ";
     cin >> n;
 
     // Validate the input
     if (n <= 0) {
         cout << "Please enter a positive integer." << endl;
         return 1; 
    }
 
     // Display table header
     cout << "Number\tSquare\tCube" << endl;
     cout << "-----------------------" << endl;
 
     // Use a for loop to calculate and display squares and cubes
     for (int i = 1; i <= n; i++) {
         int square = i * i;  
        int cube = i * i * i;  
        
        // Display the number,square and cube
         cout << i << "\t" << square << "\t" << cube << endl;
    }
 
     return 0;
 }
 
