// https://practice.geeksforgeeks.org/problems/k-largest-elements/0
#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    // Create an Heap
    priority_queue <int> myList;
    int number, list_size, k;
    cin >> list_size >> k;
    // Add element in the Heap
    for(int i=0; i< list_size; i++)
    {
        cin >> number; 
        myList.push(number);
    }
    // We Know that the Heap atomatically will sort the element
    // in Descending Order
    // Print the K biggest element  
    while(!myList.empty() && k!=0)
    {
        cout << myList.top() << " ";
        myList.pop();
        k--;
    }
    cout<<endl;
}

int main()
{
    int t; 
    // Read Number of Test cases
    cin >> t; 
    
    while(t--)
        solve_test();

	return 0;
}