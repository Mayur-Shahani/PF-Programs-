#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct User{
	string name;
	int id;
	string email;
};
int main()
{  
    User users[5];
    ofstream file("Details.txt",ios::app);
    if (!file)
    {
        cout << "File could not be created.\n";
        return 1;
    }
    
    for (int i=0;i<5;i++) 
	{
        cout<<"Enter user details "<<i+1<<":\n";
        cout<<"Name: ";
        cin.ignore(); 
        getline(cin, users[i].name);
        cout<<"ID: ";
        cin>>users[i].id; 
        cout<<"Email: ";
        cin>>users[i].email;
        file<<"User " <<i+1<<":\n";
        file<<"Name: "<<users[i].name<<"\n";
        file<<"ID: "<<users[i].id<<"\n";
        file<<"Email: "<<users[i].email<<"\n";
    }
    file.close();
    cout<<"Information Added!"<<endl;
   return 0;
}