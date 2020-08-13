//  https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/?track=DSASP-Hashing&batchId=154
pair<string,int> winner(string arr[],int n)
{
    map<string, int>mp;
    for(int i =0; i < n; i++)
        mp[arr[i]]++;
    
    
    pair<string, int>solution; 
    int actual_max = -999999;
    for(auto x: mp)
    {
        if(x.second > actual_max)
        {
            solution.first = x.first;
            solution.second = x.second;
            actual_max = x.second; 
        }
        else if(x.second == actual_max)
        {
            if(solution.first > x.first)
            {
                actual_max = x.second; 
                solution.first = x.first;
                solution.second = x.second; 
            }
        }
    }
    return solution; 
}