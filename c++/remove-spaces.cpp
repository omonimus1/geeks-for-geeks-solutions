// https://practice.geeksforgeeks.org/problems/remove-spaces/0/?problemStatus=unsolved&difficulty[]=-2&page=1&sortBy=submissions&query=problemStatusunsolveddifficulty[]-2page1sortBysubmissions
#include <bits/stdc++.h>
using namespace std;

string RemoveSpaces(string word)
{
    string result = "";
    for(int i=0;  i< word.size(); i++)
    {
        if(word[i] != ' ')
            result += word[i];
    }
    return result; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    string word; 
    while(t--)
    {
        getline(cin, word);
        cout << RemoveSpaces(word) <<endl;
    }
    return 0;
}