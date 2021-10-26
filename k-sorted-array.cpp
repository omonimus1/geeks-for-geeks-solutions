// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int binarySearch(int a[], int low, int high, int val){
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid] == val)
                return mid;
            else if(val<a[mid])
                high = mid-1;
            else
                low = mid+1;
        }
    }
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int a[n];
        for(int i = 0; i<n; i++)
            a[i] = arr[i];
        sort(a, a+n);
        for(int i = 0; i<n; i++){
            int index = binarySearch(a, 0, n-1, arr[i]);
            if(abs(i-index)>k)
                return "No";
        }
        return "Yes";
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  
