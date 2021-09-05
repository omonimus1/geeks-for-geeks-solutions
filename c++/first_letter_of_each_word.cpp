class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string solution = "", word = "";
	    int latest_space = -1, current_index = -1; 
	    for (auto x: S)
	    {
	        index ++;
	        if(x == ' '){
	            latest_space = current_index;
	            solution += word[0];
	            word = "";
	        }
	        else{
	            word += x;
	        }
	    }
	    // To include the first letter of the latest word
	    solution += S[latest_space+1];
	    return solution; 
	}
};