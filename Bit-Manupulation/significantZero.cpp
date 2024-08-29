#include <bits/stdc++.h>
using namespace std;

int countSignificantZeros(int num)
{
    if (num == 0)
        return 0;

    // Finding the position of the most significant bit (MSB)
    int msb = 31 - __builtin_clz(num);

    // Finding the position of the least significant bit (LSB)
    int lsb = __builtin_ctz(num);

    // Calculate the total number of bits between MSB and LSB
    int totalBits = msb - lsb + 1;

    // Count the number of 1s in the number
    int onesCount = __builtin_popcount(num);

    // Significant zeros = Total bits between MSB and LSB - Count of 1s
    int significantZeros = totalBits - onesCount;

    return significantZeros;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int result = countSignificantZeros(num);
    cout << "Number of significant zeros: " << result << endl;

    return 0;
}
