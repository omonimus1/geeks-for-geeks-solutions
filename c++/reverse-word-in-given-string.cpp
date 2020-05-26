// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string/0/
#include <iostream>
#include<string>
#include<vector>
using namespace std;

void solve_test()
{
   
    // Declare and read string
    string sentence;
    cin >> sentence;
    vector<string>myStack;
    string single_word;
    for(int i =0; i < sentence.size(); i++)
    {
        if(sentence[i] != '.')
            single_word.push_back(sentence[i]);
        else
        {
            myStack.push_back(single_word);
            single_word = "";
        }
    }
    // Store the last word of the input string
    myStack.push_back(single_word);
    
    for(int i = myStack.size()-1; i >=1; i--)
        cout<<myStack[i]<<'.';
    // Print Last word of the output string without dot
    cout<<myStack[0]<<endl;
}

int main()
{
    // Declare and Read number of test cases
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	
	return 0;
}