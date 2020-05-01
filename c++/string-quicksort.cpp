
// https://practice.geeksforgeeks.org/problems/sort-string/0
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    unsigned int t; 
    cin >> t; 
    string word; 
    for(int i=0; i<t; i++)
    {
        cin >>word;
        // This approach uses Quick sort algorithm 
        sort(word.begin(), word.end());
        cout << word<<endl;
    }
	
	return 0;
}