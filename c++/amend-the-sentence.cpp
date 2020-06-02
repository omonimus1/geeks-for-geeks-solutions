// https://practice.geeksforgeeks.org/problems/amend-the-sentence/0/
#include <bits/stdc++.h>
using namespace std;

void print_words(string word)
{
    for(int i =0; i< word.size(); i++)
    {
        if(isupper(word[i]))
        {   
            if(i > 0) cout<<" ";
            cout << (char)tolower(word[i]);
            continue;
        }
        cout << word[i];
    }
    cout << endl;
}

int main()
{
    int t; 
    cin >> t; 
    string word;
    for(int i=0; i<t; i++)
    {
        cin >> word;
        print_words(word);
    }
	
	return 0;
}