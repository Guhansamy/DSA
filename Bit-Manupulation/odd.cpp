#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;

    if ((num & 1) == 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;

    return 0;
}