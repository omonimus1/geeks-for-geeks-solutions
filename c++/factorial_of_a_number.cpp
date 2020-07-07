// https://practice.geeksforgeeks.org/problems/factorial-of-number/1/?track=SPCF-Mathematics&batchId=154
long long factorial (int N)
{
    int sum =0 ;
    for(int i =1; i <= N; i++)
    {
        sum += i * N;
    }
    return sum;
}