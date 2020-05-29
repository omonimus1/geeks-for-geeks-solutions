#include <bits/stdc++.h>
using namespace std;


void solve_test()
{
    long int list_size; 
    long int arr[list_size];
    long int number;
    for(int i =0; i < list_size; i++)
    {
        cin >> number; 
        arr[i] = number; 
    }
    int counter;
    for(int i =0; i< list_size; i++)
    {
        counter = 0;
        for(int j=0; j <list_size; j++)
        {
            if(j==i)
                continue;
            if(counter > list_size/2)
            {
                cout << arr[i]<<endl;
                return; 
            }
            if(arr[i] == arr[j])
            {
                counter++;
            }
            
        }
        
    }
    cout << -1<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        solve_test();
    }
	
	return 0;
}