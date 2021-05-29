class Solution{
public:
	// function to return sum of elements
	// in an array of size n
	int sum(int arr[], int n) {
	    int sol = 0;
	    for(int i =0; i< n;i++)
	    {
	        sol += arr[i];
	    }
	    return sol; 
	}
};