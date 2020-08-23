//   https://practice.geeksforgeeks.org/problems/naive-pattern-search-1587115620/1/?track=DSASP-Strings&batchId=154
bool search(string pat, string txt) 
{ 
	int n = txt.size();
	int m = pat.size(); 
	int i, j; 
	for( i =0; i <= n-m; i++ )
	{
	    for( j=0; j < m; j++)
	    {
	        if(pat[j] != txt[j+i])
	            break; 
	    }
	    if(j == m)
	        return true; 
	}
	return false;
}