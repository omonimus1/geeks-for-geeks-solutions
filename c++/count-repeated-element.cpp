// https://practice.geeksforgeeks.org/problems/count-only-repeated/0/?track=SPCF-Searching&batchId=154
/*
Given an array of positive integers, where elements are consecutive (sorted). 
Also, there is a single element which is repeating X (any variable) number of times. Now, the task is to find the 
element which is repeated and number of times it is repeated.
*/

#include <iostream>
using namespace std;

void solve_test()
{
    int size_list;
    cin >> size_list;
    int arr[size_list];
    for(int i =0; i < size_list; i++)
    {
        cin >> arr[i];
    }
    
    int counter = 0;
    int element;
    for(int i =0; i < size_list-1; i++)
    {
        if(arr[i] == arr[i+1])
            element = arr[i];
        while(arr[i] == arr[i+1])
        {
            counter +=1;
            i+= 1;
        }
    }
    counter+=1;
    cout << element << " "<<counter<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
        solve_test();
    return 0;
}