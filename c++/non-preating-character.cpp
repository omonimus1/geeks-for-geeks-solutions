#include<iostream>
#include<string>
#include<unordered_map>
#include<map>

using namespace std;

//User function template for C++

// return the first non-repeating char in S.
// if there's no non-repeating char, return "-1"
void find(string S) {
    map<char, int>mp;
    
    for(int i =0; i< S.size(); i++)
    {
            mp[S[i]]++;
    }
    
    map<char, int> ::reverse_iterator x;
    for(x=mp.rbegin(); x!=mp.rend(); ++x)
    {

        cout << x->first << " " << x->second <<endl;
        //if(x->second == 1)
        //{   
        //    cout << x->first;
        //    return;
        //}
            
    }
    cout<< "-1";
}

int main()
{
    find("hello");
    return 0;
}