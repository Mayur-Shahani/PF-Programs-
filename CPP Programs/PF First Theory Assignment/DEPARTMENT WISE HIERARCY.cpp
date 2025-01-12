#include <iostream>
using namespace std;

int main() {
    int schoolChoice, departmentChoice;

 
    cout << "Select a School:" << endl;
    cout << "1. School of Computer" << endl;
    cout << "2. School of Business" << endl;
    cout << "3. School of Engineering" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> schoolChoice;

    // Main switch case for school choices
    switch (schoolChoice) {
        case 1:
            cout << "Select a Department in School of Computer :" << endl;
            cout << "1. Department of Informatics" << endl;
            cout << "2. Department of Machine Learning" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

           
            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Informatics" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Machine Learning" << endl;
                    break;
                default:
                    cout << "Invalid choice in School of Computer Science!" << endl;
                    break;
            }
            break;

        case 2:
            cout << "Select a Department in School of Business:" << endl;
            cout << "1. Department of Commerce" << endl;
            cout << "2. Department of Purchasing" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

            // Nested switch case for departments in School of Business
            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Commerce" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Purchasing" << endl;
                    break;
                default:
                    cout << "Invalid choice in School of Business!" << endl;
                    break;
            }
            break;

        case 3:
            cout << "Select a Department in School of Engineering:" << endl;
            cout << "1. Department of Mechanical Engineering" << endl;
            cout << "2. Department of Electrical Engineering" << endl;
            cout << "Enter your choice (1-2): ";
            cin >> departmentChoice;

            
            switch (departmentChoice) {
                case 1:
                    cout << "You selected: Department of Mechanical Engineering" << endl;
                    break;
                case 2:
                    cout << "You selected: Department of Electrical Engineering" << endl;
                    break;
                default:
                    cout << "Invalid choice in School of Engineering!" << endl;
                    break;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
