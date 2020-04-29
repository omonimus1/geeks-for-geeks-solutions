// https://practice.geeksforgeeks.org/problems/the-dice-problem/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    int number; 
    cin >> number; 
    cout << 6-number+1 << endl; 
}

int main()
{
    unsigned long int test_cases; 
    cin >> test_cases; 
    
    while(test_cases)
        solve_test();
	return 0;
}
