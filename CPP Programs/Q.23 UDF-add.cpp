#include <iostream>
using namespace std;
struct user
{
    char name[30];
    int id;
    float gpa;
    int marks[5];
};
int udf(user student)
{
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + student.marks[i];
    }
    return sum;
}
int main()
{
    user student;

    cout << " Enter your name: ";
    cin >> student.name;
    cout << " Enter your id: ";
    cin >> student.id;
    cout << " Enter your GPA: ";
    cin >> student.gpa;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter your Marks of subject " << i + 1 << ":";
        cin >> student.marks[i];
    }

    int sum = udf(student);
    cout << "Sum of all marks is " << sum;
    return 0;
}