// https://practice.geeksforgeeks.org/problems/last-index-of-1/0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int t;
    int left, right, middle;
    cin >> t;
    string number;
    bool found;
    while (t--)
    {
        found = false;
        cin >> number;
        for (int i = number.size() - 1; i >= 0; i--)
        {
            if (number[i] == '1')
            {
                cout << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "-1" << endl;
    }
    return 0;
}