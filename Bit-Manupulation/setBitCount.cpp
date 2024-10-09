#include <bits/stdc++.h>
using namespace std;

int main()
{

    int count = 0, num;
    cout << "Enter the number" << endl;
    cin >> num;

    while (num)
    {
        count = count + (num & 1);
        num = num >> 1;
    }

    cout << "The count of setbit " << count << endl;

    return 0;
}