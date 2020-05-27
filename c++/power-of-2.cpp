// https://practice.geeksforgeeks.org/problems/power-of-2/0/
#include <bits/stdc++.h>
using namespace std;

bool isPower()
{
    long int number;
    cin >> number;
    for(int i=0;  i <= sqrt(number); i++)
    {
        if(pow(2, i) > number)
            return false;
        if(pow(2,i) == number)
            return true; 
    }
    return false; 
}


int main()
{
    int t; 
    cin >> t; 

    while(t--)
    {
        if(isPower())
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
	return 0;
}