//  https://practice.geeksforgeeks.org/problems/reversing-the-vowels/0/?problemStatus=unsolved&difficulty[]=-2&page=1&sortBy=submissions&query=problemStatusunsolveddifficulty[]-2page1sortBysubmissions
#include <bits/stdc++.h>
using namespace std;

bool is_vowel[CHAR_MAX] = { false }; // initializes all values to false

void InitializeVowels(string set_of_patterns)
{
    for(int i =0; i < set_of_patterns.size(); i++)
    {
        is_vowel[(int)set_of_patterns[i]] = true; 
    }
}

string ReverseVowels(string word)
{
    string vowels = "";
    int len = word.size(); 
    for(int i =0;  i< len; i++)
    {
        if(is_vowel[(int)word[i]])
            vowels += word[i];
    }
    reverse(vowels.begin(), vowels.end());
    int start = 0; 
    for(int i =0; i < len; i++)
    {
        if(is_vowel[(int)word[i]])
        {
            word[i] = vowels[start];
            start++; 
        }
    }
    return word; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    InitializeVowels("aeiouAEIOU");
    long int t;
    cin >>t; 
    while(t--)
    {
        string word; 
        cin >> word; 
        cout << ReverseVowels(word) <<endl;
    }
    return 0;
}