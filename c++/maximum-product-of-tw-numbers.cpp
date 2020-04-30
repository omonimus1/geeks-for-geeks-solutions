// https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers/0
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve_test()
{
    unsigned int list_size, number; 
    cin >> list_size; 
    vector<int>list_numbers; 
    // Store the list of numbers provided in input
    for(int i =0; i< list_size; i++)
    {
        cin >> number; 
        list_numbers.push_back(number);
    }
    // Sorting the vector 
    sort(list_numbers.begin(), list_numbers.end(), greater<int>());
    // Print the product of the two biggest numbers of the list
    cout<<list_numbers[0] * list_numbers[1]<<endl;
}

int main()
{
    // To have low I/O operations time cost
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	return 0;
}
