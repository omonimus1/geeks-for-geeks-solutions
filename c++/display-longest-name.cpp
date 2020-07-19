//  https://practice.geeksforgeeks.org/problems/display-longest-name/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int number_of_words;
    cin >> number_of_words;
    int max = -1;
    int len;
    string word, result="";
    while(number_of_words--)
    {
        cin >> word;
        len = word.size();
        if(len > max)
        {
            max = len;
            result = word; 
        }
    }
    cout << result << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t; 
    while(t--)
    {
        solve_test();
    }
    return 0;
}