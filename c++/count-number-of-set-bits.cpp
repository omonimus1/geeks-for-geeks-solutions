// https://practice.geeksforgeeks.org/problems/count-total-set-bits/0/
#include <iostream>
using namespace std;

int count_number_of_set_bits(int number)
{
   int result=0;
   int n;
   for(int i =1; i<= number; i++)
   {
       n = i;
       while( n  > 0)
       {
            if(n % 2)
                result++;
           n /=2;
       }
       
   }
   return result; 
}


int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
    {
        // Read end_range number
        int b;
        cin >> b;
        cout << count_number_of_set_bits(b)<<endl;
    }
	return 0;
}