/*
https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays
Given an array A[] of N integers and an index Key. Your task is to print the element present at index key in the array.
*/

class Solution{
    public:
    int findElementAtIndex(int a[], int n, int key) 
    {
        if(key > n-1 || key < 0)
            return -1;
        return a[key];
    }
};
