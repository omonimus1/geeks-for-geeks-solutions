// https://practice.geeksforgeeks.org/problems/multiplication-under-modulo/1/?track=SPCF-Mathematics&batchId=154
int multiplicationUnderModulo(long long a,long long b)
{
    int M=1000000007;
    return ((a % M) * (b % M)) % M;
}