//https://practice.geeksforgeeks.org/problems/split-strings5211/1/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1
vector<string> splitString(string S) 
{ 
    vector<string>solution; 
    string characters = "";
    string digits = "";
    string special_chars = "";
    for(int i=0; i < S.size(); i++)
    {
        if(S[i] >='a' && S[i] <= 'z' || S[i] >='A' && S[i] <= 'Z')
            characters += S[i];
        else if(S[i] >= '0' && S[i] <= '9')
            digits += S[i];
        else
            special_chars += S[i];
    }
    solution.push_back(characters);
    solution.push_back(digits);
    solution.push_back(special_chars);
    return solution; 
}