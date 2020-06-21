// https://practice.geeksforgeeks.org/problems/mean-and-median-1587115620/1/?track=DSA-Foundation-Final-Arrays&batchId=193
int median(int A[],int N)
{
    sort(A,A+N);
    if(N % 2 !=0 )
        return A[N/2];
    else
    {
        int half_index = N/2;
        int sum = A[half_index] + A[half_index-1];
        return floor(sum/2);
    }
}

int mean(int A[],int N)
{
    int sum = 0; 
    for(int i =0; i < N; i++) sum += A[i];
    
    return sum/N;
}