// https://practice.geeksforgeeks.org/problems/remove-repeated-digits-in-a-given-number/0
#include <bits/stdc++.h>
using namespace std;

string remove_repeated_digits(string number)
{
    stack<char>s;
    s.push(number[0]);
    
    string result = "";
    result.push_back(number[0]);
    
    for(int i = 1; i < number.size(); i++)
    {
        if(number[i] != s.top())
        {
            s.push(number[i]);
            result.push_back(number[i]);
        }
    }
    return result;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    string number; 
    while(t--)
    {
        cin >> number;
        cout << remove_repeated_digits(number) << endl;
    }
    return 0;
}