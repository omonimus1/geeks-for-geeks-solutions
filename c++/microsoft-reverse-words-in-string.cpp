//  https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?company[]=Microsoft&problemStatus=unsolved&page=1&query=company[]MicrosoftproblemStatusunsolvedpage1

string reverseWords(string s) 
{ 
    vector<string>sub;
    string sub_word="";
    int len = s.size();
    for(int i =0; i < len; i++)
    {
        sub_word = "";
        while(i < len && s[i] != '.')
        {
            sub_word += s[i];
            i+=1; 
        }
        sub.push_back(sub_word);
    }
    
    reverse(sub.begin(), sub.end());
    string result = "";
    for(int i =0; i < sub.size()-1; i++)
    {
        result += sub[i];
        result += '.';
    }
    result += sub[sub.size()-1];
    return result; 
} 