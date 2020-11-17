// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1/?company[]=Amazon&problemStatus=unsolved&difficulty[]=-2&page=1&sortBy=submissions&query=company[]AmazonproblemStatusunsolveddifficulty[]-2page1sortBysubmissions
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int>solution; 
	    for(int i=0;  i< n; i++)
	    {
	        if(arr[i] == i+1)
	            solution.push_back(arr[i]);
	    }
	    return solution; 
	}
};