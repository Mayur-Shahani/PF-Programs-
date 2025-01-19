#include <iostream>
using namespace std;
struct Rectangle{
    int length,width;
};
int calculateArea(Rectangle p)
{
	return p.length*p.width;
}
int calculatePerimeter(Rectangle p)
{   return 2*(p.length+p.width);
}
int main()
{
	Rectangle rect;
	cout<<"Enter length: ";
	cin>>rect.length;
	cout<<"Enter width: ";
	cin>>rect.width;
	cout<<"Area: "<<calculateArea(rect)<<endl;
	cout<<"Perimeter: "<<calculatePerimeter(rect)<<endl;
	return 0;
}