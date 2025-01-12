#include <iostream>
using namespace std;

void fromCelsius(float temp)
{
     cout << "Celsius to Kelvin: " << temp + 273.15 << " K " << endl;
    cout << "Celsius to Fahrenheit: " << (temp * 9 / 5) + 32 << " F " << endl;
   
}

void fromFahrenheit(float temp)
{
    cout << "Fahrenheit to Celsius: " << (temp - 32) * 5 / 9 << " C " << endl;
    cout << "Fahrenheit to Kelvin: " << ((temp - 32) * 5 / 9) + 273.15 << " K " << endl;
}

void fromKelvin(float temp)
{
    cout << "Kelvin to Celsius: " << temp - 273.15 << " C " << endl;
    cout << "Kelvin to Fahrenheit: " << ((temp - 273.15) * 9 / 5) + 32 << " F " << endl;
}

int main()
{
    float temperature;
    int choice;
    
    do{
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    
    cout << "Enter the value of Temperature: ";
    cin >> temperature;

    switch (choice)
    {
    case 1:
        fromCelsius(temperature);
        break;
    case 2:
        fromFahrenheit(temperature);
        break;
    case 3:
        fromKelvin(temperature);
        break;
    default:
        cout << "Invalid choice " << endl;
    }
   }while(choice != 4);
    return 0;
}