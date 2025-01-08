#include <iostream>
#include<string>
using namespace std;
int num = 0; 
struct student {
    string name;
    int id = 0;
    string dept;
}st[100];


void inputData(student st[]) {
    st[num].id = num;
    cout << "Enter your Name : " ;
    cin >> st[num].name;
    cout << "Enter your Department : " ;
    cin >> st[num].dept;
    st[num].id++;
    cout << "Your Id is " << st[num].id << endl;
    cout  << endl;
    num++;
}
void showData(){
    for (int i = 0;i <= num-1;i++) {
        cout << "Name : ";
        cout << st[i].name << endl;
        cout << "ID : ";
        cout << st[i].id << endl;
        cout << "Department : ";
        cout << st[i].dept << endl;
        cout <<  endl;
    }
}
void searchData() {
    int id;
    cout << "Enter Student ID : ";
    cin >> id;
    for (int i = 0;i <= num-1;i++) {
        if (st[i].id == id) {
            cout << "Data Founded " << endl;
            cout << "Name : ";
            cout << st[num-1].name << endl;
            cout << "ID : ";
            cout << st[num-1].id << endl;
            cout << "Department : ";
            cout << st[num-1].dept << endl;
        }
        else {
            cout << "Data Not Found " << endl;
        }


        cout  << endl;
    }
}
void updateData() {
    int id;
    cout << "Enter Student ID : ";
    cin >> id;
    
    for (int i = 0;i <= num-1;i++) {
        if (st[i].id == id) {
            cout << "Data Founded " << endl;
            cout << "Enter a Name " << endl;
            cin >> st[id-1].name;
            cout << "Enter Department " << endl;
            cin >> st[id-1].dept;
            cout << "Data Updated Successfully" << endl;
        }
        else {
            cout << "Data Not Found" << endl;
        }


        cout  << endl;
    }

}
void deleteData() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;
    int index = -1;

    for (int i = 0; i < num; i++) {
        if (st[i].id == id) {
                index = i;
        cout << " Deleted Successfully" << endl;
                break;
                
            }
        
        else {
            cout << "Not Found..!" << endl;
            return;
        }
    }

    for (int i = index; i < num - 1; i++) {
        st[i] = st[i + 1];
    }

    num--;


}


int main() {
   
    char choice;
    do {
       cout << "\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t|   **STUDENT MANAGEMENT SYSTEM**   |" << endl;
    cout << "\t\t\t---------------------------------------" << endl;
    cout << "\t\t\t| 1. ENTER DATA                       |" << endl;
    cout << "\t\t\t| 2. SHOW DATA                        |" << endl;
    cout << "\t\t\t| 3. SEARCH DATA                      |" << endl;
    cout << "\t\t\t| 4. UPDATE DATA                      |" << endl;
    cout << "\t\t\t| 5. DELETE DATA                      |" << endl;
    cout << "\t\t\t| 6. EXIT                             |" << endl;
    cout << "\t\t\t---------------------------------------" << endl;
        cout << "Enter Any Choice: ";
        cin >> choice;
        switch (choice)
        {
        case '1':
            inputData(st);
            break;

        case '2':
            showData();
            break;

        case '3':
            searchData();
            break;

        case '4':
            updateData();
            break;

        case '5':
            deleteData();
            break;

        case '6':
            cout << "Program Exits" << endl;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }

    } while (choice != '6');
    return 0;
}
    
    	
	
