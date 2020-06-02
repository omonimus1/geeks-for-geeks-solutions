// https://practice.geeksforgeeks.org/problems/remove-b-and-ac-from-a-given-string/0
#include <bits/stdc++.h>
using namespace std;

string filter_string(string word)
{
    // Case 1: word is 'b' or 'ac'
    if(word == "b" || word == "ac")
    {
        cout <<("in case 1");
        return "";
    }
    
    string result="";
    for(int i =0; i <word.size(); i++)
    {
        if(word[i] == 'b')
            continue;
        else if(word[i] == 'a' && word[i+1]=='c')
        {
            i+=1;
            continue;
        }
        result.push_back(word[i]);    
    }
    return result;
}

int main()
{
    int t; 
    cin >> t; 
    string word;
    while(t--)
    {
        cin >> word;
        cout << filter_string(word) <<endl;;

    }
	return 0;
}