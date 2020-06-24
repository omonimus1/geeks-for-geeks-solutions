// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1/?track=DSA-Foundation-Final-String&batchId=193
/*
    Given two strings a and b consisting of lowercase characters. 
    The task is to check whether two given strings are an anagram of each 
    other or not. 
    An anagram of a string is another string that contains the same characters,
    only the order of characters can be different. For example, “act” and “tac” 
    are an anagram of each other.
*/
bool isAnagram(string c, string d){
    if(c.size() != d.size())
        return false;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    
    for(int i =0; i < c.size(); i++)
    {
        if(c[i] != d[i])
            return false;
    }
    return true; 
}