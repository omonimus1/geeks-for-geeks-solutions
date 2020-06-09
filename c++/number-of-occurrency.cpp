// https://practice.geeksforgeeks.org/problems/number-of-occurrence/0
#include <bits/stdc++.h>
using namespace std;

int  solve_test()
{
    int n, target, number;
    int counter = 0;
    cin >> n >> target;
    for(int i =0; i < n; i++)
    {
        cin >> number; 
        if(number == target)
            counter++;
    }
    if(counter == 0)
        return -1;
    return counter;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        cout <<solve_test()<<endl;
	
	return 0;
}