#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &ans, int mid, int low, int high)
{
    int left = low, right = mid + 1;
    vector<int> val;

    while (left <= mid && right <= high)
    {
        if (ans[left] <= ans[right])
        {
            val.push_back(ans[left]);
            ++left;
        }
        else
        {
            val.push_back(ans[right]);
            ++right;
        }
    }

    while (left <= mid)
    { // if left array has element
        val.push_back(ans[left]);
        ++left;
    }

    while (right <= high)
    { // if right array has element
        val.push_back(ans[right]);
        ++right;
    }

    for (int i = low; i <= high; ++i)
    {
        ans[i] = val[i - low];
    }
}

void mergeSort(vector<int> &ans, int low, int high)
{
    if (low >= high)
        return; // base case for the condition to be returned
    int mid = low + (high - low) / 2;

    mergeSort(ans, low, mid);
    mergeSort(ans, mid + 1, high);
    merge(ans, mid, low, high);
}

int main()
{
    cout << "hello";
    vector<int> ans = {5, 8, 1, 6, 7, 12, 3, 11};
    int n = ans.size();

    mergeSort(ans, 0, n - 1); // mergeSort function to sorrt the array

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}