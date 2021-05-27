/*
https://practice.geeksforgeeks.org/problems/product-of-maximum-in-first-array-and-minimum-in-second3943/1/?category[]=Arrays&category[]=Arrays&problemStatus=unsolved&page=1&query=category[]ArraysproblemStatusunsolvedpage1category[]Arrays
Given two arrays of A and B respectively of sizes N1 and N2, the task is to 
calculate the product of the maximum element of the first array and minimum element 
of the second array.
*/
class Solution{
    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        int biggest = INT_MIN;
        int smallest = INT_MAX;
        
        for(int i =0; i < n; i++)
        {
            if(a[i] > biggest)
                biggest = a[i];
        }
        
        for(int i =0; i < m; i++)
        {
            if(b[i] < smallest)
                smallest = b[i];
        }
        return biggest*smallest; 
    }
};