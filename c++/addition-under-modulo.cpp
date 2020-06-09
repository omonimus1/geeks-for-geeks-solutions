// https://practice.geeksforgeeks.org/problems/addition-under-modulo/1/?track=ppc-mathematics&batchId=221
/*
Modular Arithmetic:
(a + b) mod M = ((a mod M) + (b mod M)) mod M.
(a - b) mod M = ((a mod M) - (b mod M)) mod M.
(a * b) mod M = ((a mod M) * (b mod M)) mod M.
*/
int sumUnderModulo(long long a,long long b)
{
    int M=1000000007;
    int result = (a%M) + (b%M);
    return result%M; 
}