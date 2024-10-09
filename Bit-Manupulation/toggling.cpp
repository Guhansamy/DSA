#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num = 5;
    int index = 2;

    // here toggling refers changing the set to unset and unset to set
    int i = index - 1;
    cout << (num ^ (1 << i));

    return 0;
}