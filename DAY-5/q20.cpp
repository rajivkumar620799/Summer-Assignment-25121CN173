#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i, num, max = 0;
    cout << "Enter a number to find the greatest prime number: ";
    cin >> num;

    if (num == 1)
    {
        cout << "1 is not a prime number.";
        return 1;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (isPrime(i))
        {
            if (num % i == 0)
            {
                if (max < i)
                {
                    max = i;
                }
            }
        }
    }

    cout << "The greatest prime factor of " << num << " is " << max;
    return 0;
}