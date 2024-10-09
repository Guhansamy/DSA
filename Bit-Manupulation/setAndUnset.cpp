#include <bits/stdc++.h>
using namespace std;

// Checking the ith bit is set or unset
void checking()
{
    int num, index;
    cout << "Enter the number and index" << endl;
    cin >> num >> index;

    int i = index - 1; // Always index starts from 1

    if ((num & (1 << i)) == 0)
        cout << "It is Unset bit (0)" << endl;
    else
        cout << "It is setBit (1)" << endl;
}

// Setting the ith bit
void setting()
{
    int num, index;
    cout << "Enter the number and index" << endl;
    cin >> num >> index;
    int i = index - 1; // Always index starts from 1

    cout << "After setting the bit at index " << index << " = " << (num | (1 << i));
}

void unSetting()
{
    int num, index;
    cout << "Enter the number and index" << endl;
    cin >> num >> index;
    int i = index - 1; // Always index starts from 1

    cout << "After unsetting the bit at index " << index << " = " << (num & ~(1 << i));
}

int main()
{

    // checking();
    setting();
    // unSetting();
    return 0;
}