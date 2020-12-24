// https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1/?track=dsa-workshop-1-strings&batchId=308
char getMaxOccuringChar(char* str)
{
    unordered_map<char, int>mp;
    for(int i =0; i < strlen(str); i++)
        mp[str[i]]++;
        
    char result;
    int smallest_frequency = -1;
    for(auto x : mp)
    {
        if(x.second > smallest_frequency)
        {
            smallest_frequency = x.second;
            result = x.first;
        }
        if(x.second == smallest_frequency && x.first < result)
        {
            result = x.first;
        }
    }
    return result; 
}