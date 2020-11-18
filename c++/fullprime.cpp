//  https://practice.geeksforgeeks.org/problems/full-prime2659/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=2&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page2sortBysubmissions
class Solution{
    public:
    
    bool IsPrime(int N)
    {
         if(N  == 1)
	        return false; 
	    for(int  i= 2; i * i <= N; i++)
	    {
	        if(N%i == 0)
	            return false; 
	    }
	    return true; 
    }
    
	int fullPrime(int N){
	    if(!IsPrime(N))
	        return 0; 
	   // check if all digits are prime
	   while(N>0)
	   {
	       if(!IsPrime(N%10))
	       {
	           return 0; 
	       }
	       N /=10; 
	   }
	   return 1; 
	}
};