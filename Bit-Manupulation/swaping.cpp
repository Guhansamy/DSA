#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num, num1;
    cout << "Enter the two numbers" << endl;
    cin >> num >> num1;

    cout << "Before Swapping " << num << " " << num1 << endl;

    num = num ^ num1;
    num1 = num1 ^ num;
    num = num ^ num1;

    cout << "After Swapping " << num << " " << num1 << endl;

    return 0;
}