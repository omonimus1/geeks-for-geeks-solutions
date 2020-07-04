// https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1/?track=DSA-Foundation-Final-Recursion&batchId=193
int countDigits(int n)
{
   int count = 0;
   if(n < 10 )
        return 1;
   
    return 1 + countDigits(n/10); 
}