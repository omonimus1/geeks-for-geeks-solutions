//https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays
/*
*  Given an array of N integers. Your task is to print the sum of all of the integers.
*/

class Solution{
    public:
    int getSum(int a[], int n) {
        int solution = 0;
        for(int i =0; i < n; i++)
            solution += a[i];
            
        return solution; 
    }   
};
