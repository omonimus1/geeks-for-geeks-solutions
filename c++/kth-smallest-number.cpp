// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve_test()
{
    unsigned long int k, element , list_size; 
    cin >> list_size; 
    vector<int> numbers; 
    while(list_size--)
    {
        cin >> element;
        numbers.push_back(element);
    }
    
    sort(numbers.begin(), numbers.end());
    
    cin >> k;
    cout<<numbers[k-1]<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	
	return 0;
}