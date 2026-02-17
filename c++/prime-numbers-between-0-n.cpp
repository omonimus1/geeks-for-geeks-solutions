// https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range/0

#include <iostream>
using namespace std;
void solve_test()
{
   long long n;
   cin>>n; // taking the value till we want to get the primes
   vector<bool> prime(n+1 , true); //intializing a vector of bool with all initial value true
   prime[0] = false; //marking 0 and 1 non-primes
   prime[1] = false;
   for(int i=2;i<=n;i++){
    //if a number is prime then we are marking its multiples as prime
    if(prime[i]){
        for(int j=i+i;j<=n;j+=i)
        prime[j] = false;
    }
   }
   //printing all the prime that are true in the vector
   for(int i=0;i<=n;i++){
    if(prime[i])
    cout<<i<<" ";
   }
   cout<<endl;
   //TC = O(log(log(n))) + O(n)
   //SC = O(n)
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	return 0;
}