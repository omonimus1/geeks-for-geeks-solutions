// https://practice.geeksforgeeks.org/problems/primality-test/1/?track=ppc-mathematics&batchId=221
bool isPrime(int n)
{
    if(n < 1)
        return false;
    if(n <=2)
        return true;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n% i  == 0)
            return false;
    }
    return true; 
}