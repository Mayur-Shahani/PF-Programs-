#include <iostream>
using namespace std;
int numbers[10] = {3,7,9,13,15,17,19,20,22,23};
int primeSum()
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        bool isPrime = true;
        if (numbers[i] <= 1)
        {
            isPrime = false;
        }
        else
        {
            for (int j = 2; j < numbers[i]; j++)
            {
                if (numbers[i] % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime)
        {
            sum = sum + numbers[i];
        }
    }
    return sum;
}

int main()
{
    int sumOfPrime = primeSum();

    cout << "The sum of prime numbers in the array is: " << sumOfPrime << endl;

    return 0;
}