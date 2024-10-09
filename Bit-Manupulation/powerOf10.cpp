// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int num = 100; // number to check

//     if (pow(10, log10(num) / log10(10)) == num)
//         cout << "It is power of 10" << endl;
//     else
//         cout << "It is not power of 10" << endl;

//     return 0;
// }

// //  if(pow(10,log10(x)/log10(10))==x) cout<<"true"

// below sum is not in the bits
#include <bits/stdc++.h>
using namespace std;

// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log10(n)) == floor(log10(n)));
}

// Driver code
int main()
{
    // Function call
    isPowerOfTwo(100) ? cout << "Yes" << endl
                      : cout << "No" << endl;
    // isPowerOfTwo(64) ? cout << "Yes" << endl
    //                  : cout << "No" << endl;

    return 0;
}

// This code is contributed by Surendra_Gangwar
