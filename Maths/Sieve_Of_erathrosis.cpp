#include <iostream>
#include <vector>
using namespace std;
vector<int> sieveOfEratosthenes(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= limit; ++i)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    int lower, upper;
    cout << "Enter the lower bound of the range: ";
    cin >> lower;
    cout << "Enter the upper bound of the range: ";
    cin >> upper;
    vector<int> primes = sieveOfEratosthenes(upper);
    cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (int prime : primes)
    {
        if (prime >= lower)
        {
            cout << prime << " ";
        }
    }
    cout << endl;

    return 0;
}