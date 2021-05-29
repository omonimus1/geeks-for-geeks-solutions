/*
Print the multiplication table of a given number N. 
https://practice.geeksforgeeks.org/problems/print-table0303/1/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1

*/

class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int>solution;
        for(int i =1; i<=10; i++)
        {
            solution.push_back(i*N);
        }
        return solution; 
    }
};