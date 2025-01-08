#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char name[20];
	
	cout<< "Enter your name: ";
	cin.getline(name,20);
	
  ofstream outFile("example.txt",ios::app);
  if(!outFile){
  	cout << "Error: Unable to open file for saving results. "<<endl;
  	return 1;
  }
  outFile<<name;
  outFile.close();
 
  ifstream inFile("example.txt");
  if (!inFile){
  	cout<<"Error: Unable to open file for reading."<<endl;
  	return 1;
  }
  
  string line;
  cout<<"Reading from the file: "<<endl;
  while (getline(inFile,line)){
  	cout<<line<<endl;
  }
  inFile.close();
  return 0;
}