//https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=3&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page3sortBysubmissions#
class Solution {
  public:
    string toLower(string S) {
        for(int i =0;  i< S.size(); i++)
        {
            if(isupper(S[i]))
                S[i] = tolower(S[i]);
        }
        return S; 
    }
};