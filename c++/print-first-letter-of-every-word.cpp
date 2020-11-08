//  https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1/?company[]=Amazon&company[]=Microsoft&company[]=Samsung&difficulty[]=-1&difficulty[]=0&page=1&query=company[]Amazoncompany[]Microsoftcompany[]Samsungdifficulty[]-1difficulty[]0page1
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    string solution = "";
	    int len = S.size();
	    string word;
	    for(int i =0;  i< len; i++)
	    {
	        word = "";
	       while(i < len && S[i] != ' ')
	       {
	          word += S[i];
	          i+=1; 
	       }
	       solution += word[0];
	    }
	    return solution; 
	}
};