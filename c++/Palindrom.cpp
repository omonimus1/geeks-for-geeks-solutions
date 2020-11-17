// https://practice.geeksforgeeks.org/problems/palindrome0746/1/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    string number = to_string(n);
		    int start = 0; 
		    int end = number.size()-1;
		    for(start =0; start < number.size()/2; start++)
		    {
		        if(number[start] != number[end])   
		            return "No";
		        end--;
		    }
		    return "Yes"; 
		}
};