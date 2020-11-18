// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=1&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page1sortBysubmissions
/*Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. */
class Solution{   
public:
    bool arraySortedOrNot(int arr[], int n) {
        if(n == 1)
            return true; 
        else if(n==2)
        {
            if(arr[0] <= arr[1])
                return true; 
            else
                return false; 
        }
        for(int i=0;  i< n-1; i++)
        {
            if(arr[i] > arr[i+1])
                return false;
        }
        return true; 
    }
};