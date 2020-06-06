// https://practice.geeksforgeeks.org/problems/find-position-of-set-bit/0
#include <iostream>
#include <cmath>
using namespace std;

int solve_test()
{
    long long int number;
    cin >> number;
    if(number == 1)
        return 1;
    else if(number == 2)
        return 2;
    // Number is greater than 2:
    if(number % 2 != 0)
        return -1;
    for(int i = 2; i < number; i++)
    {
        if( pow(2, i) > number)
            return -1;
        else if(pow(2, i) == number)
            return i+1;
    }
    return -1;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        cout << solve_test()<<endl;
	
	return 0;
}