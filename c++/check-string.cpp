// https://practice.geeksforgeeks.org/problems/check-string1818/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=2&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page2sortBysubmissions
//Given a string, check if all its characters are same or not.
class Solution
{
    public:
        bool check (string s)
        {
            int len = s.size(); 
        	   for(int i =1;  i< len-1; i++)
        	   {
        	       if(s[i] != s[0])
        	        return false; 
        	   }
        	   return true;
        }
};