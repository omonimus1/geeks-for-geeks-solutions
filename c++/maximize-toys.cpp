// https://practice.geeksforgeeks.org/problems/maximize-toys/0/
#include <bits/stdc++.h>
using namespace std;

int get_max_number_of_toys()
{
    int n, k;
    cin >> n >> k;
    int vect[n];
    for(int i =0; i< n; i++)
        cin >> vect[i];
        
    sort(vect, vect+n);
    if(vect[0] > k)
        return 0;
    else
    {
        int counter = 0;
        int sum=0;
        for(int i=0; i <n ; i++)
        {
            // Case 1: add another will be too expensive
            if(sum + vect[i] > k)
                return counter; 
            counter++;
            k -= vect[i];
            
        }
        return counter; 
    }
    
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
       cout <<  get_max_number_of_toys() <<endl;
    
	
	return 0;
}