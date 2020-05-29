// https://practice.geeksforgeeks.org/problems/check-if-a-number-is-power-of-another-number/0/?track=sp-mathematics&batchId=152
#include <bits/stdc++.h>
using namespace std;

bool solve_test()
{
    long int x=7, y= 3;
    //cin >> x >> y;
    if(x ==1 && y !=x)
        return 0;
    if(x == 1 && y == 1)
        return 1;  
    if(x > y)
        return 0; 
    int power = x;
    while(power <= y)
    {
        power *= x;
    }
    if(power == y )
        return 1; 
    else 
        return 0; 
    
}

int main()
{
    int t=1; 
    //cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        cout<<solve_test()<<endl;
    }
	
	return 0;
}