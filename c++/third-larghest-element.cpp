// https://practice.geeksforgeeks.org/problems/third-largest-element/1/?track=amazon-arrays&batchId=192
long long thirdLargest(long long a[], long long n)
{
    if(n < 3)
        return -1;
     sort(a, a+n);
     return a[n-3];
     
}