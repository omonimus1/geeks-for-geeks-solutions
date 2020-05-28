// https://practice.geeksforgeeks.org/problems/prime-number/0
#include <math.h>
#include<iostream>
using namespace std;

bool isPrime(long long int n )
{
    for(int i=2; i<= sqrt(n); i++)
    {
        if(n%i == 0)
            return false; 
    }

    return true;
}

int main()
{
    // To have low I/O operations time cost
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t , number; 
    cin >> t; 
    
    while(t--)
    {   cin >> number;
        if(isPrime(number))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	
	return 0;
}