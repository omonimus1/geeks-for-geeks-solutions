// https://practice.geeksforgeeks.org/problems/twice-counter4236/1/
/*
Given a list of N words. Count the number of words that appear exactly twice in the list.
*/
class Solution
{
    public:
        int countWords(string list[], int n)
        {
           unordered_map<string, int>mp; 
           for(int i =0; i < n; i++)
                mp[list[i]]++;
            int counter = 0; 
            for(auto x : mp)
            {
                if(x.second == 2)
                    counter++; 
            }
            return counter; 
        }
};