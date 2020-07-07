// https://practice.geeksforgeeks.org/problems/repeating-character-first-appearance-leftmost/1/?track=SPC-Strings&batchId=154
int repeatedCharacter (string s) 
{ 
    unordered_map<char, int>mp;
    for(int i =0; i < s.size(); i++)
        mp[s[i]]++;
        
    for(int i =0; i < s.size(); i++)
    {
        
        if(mp[s[i]] > 1)
            return i;
    }
    return -1;
} 