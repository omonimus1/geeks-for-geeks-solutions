// https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not/0
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isIsogram(string word)
{
    for(int i =0; i< word.size()-1; i++)
    {
        if(word[i] == word[i+1])
            return false;
    }
    return true;
}

void solve_test()
{
    // Declare and read string
    string word;
    cin >> word;
    
    // Sort string
    sort(word.begin(), word.end());
    // Check if it is isogram or not
    if(isIsogram(word))
        cout <<1<<endl;
    else
        cout <<0<<endl;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
    
	
	return 0;
}