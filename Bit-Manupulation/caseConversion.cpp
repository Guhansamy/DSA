#include <bits/stdc++.h>
using namespace std;

void lowerToUpper()
{
    char t1 = 'b';

    char ans = (t1 & ~(1 << 5));

    cout << ans;
    // lower case will have extra one bit at 64 so we need to remove that
}

void upperToLower()
{
    char t1 = 'A';

    char val = (t1 | (1 << 5));

    cout << val;
    // upper case will have one bit lesser than lower at 64 so we are setting that
}

int main()
{

    // lowerToUpper();
    upperToLower();

    return 0;
}