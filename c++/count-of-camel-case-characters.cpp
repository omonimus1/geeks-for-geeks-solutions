// https://practice.geeksforgeeks.org/problems/find-the-camel/0/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1
#include <bits/stdc++.h>
using namespace std;

int GetNumberCaseChaes(string sentence)
{
    int counter = 0; 
    for(int i =0;  i< sentence.size(); i++)
    {
        if(sentence[i] >= 'A' && sentence[i] <= 'Z')
            counter++;
    }
    return counter; 
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
        cin >> word; 
        cout << GetNumberCaseChaes(word) <<endl;
    }
    return 0;
}