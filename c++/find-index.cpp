// https://practice.geeksforgeeks.org/problems/find-index4752/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=2&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page2sortBysubmissions
/*
You just need to complete the function findIndex() that takes array a, integer N and integer
 key as parameters and returns an array of length 2 in which at first index contains the value 
 of start index and at the second index contains the value of end index. If the key does not 
 exist in the array then return -1 for both start and end index in this case.
*/
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int>solution = {-1, -1};
        int start;
        for(int i =0; i < n; i++)
        {
            if(a[i] == key)
            {
                solution[0] = i;
                int j = n-1; 
                while(j >=i)
                {
                    if(a[j] == key)
                    {
                        solution[1] = j; 
                        return solution;  
                    }
                    j--; 
                }
                if(solution[1] == -1)
                {
                    solution[1] = i; 
                    return solution; 
                }
            }
        }
        return solution; 
    }
  
};