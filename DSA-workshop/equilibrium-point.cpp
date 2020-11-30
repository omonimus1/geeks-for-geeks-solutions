/*
 https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=dsa-workshop-1-arrays&batchId=308
 Given an array A of N positive numbers. The task is to find the first Equilibium Point in the array.
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
*/
int equilibriumPoint(long long a[], int n) {
    if (n == 1)
        return 1;

    int total = 0;
    for (int i = 0; i < n; i++)
        total += a[i];
    int left = 0;
    for (int i = 0; i < n; i++)
    {
        total -= a[i];
        if (total == left)
            return 1 + i;
        left += a[i];
    }
    return -1;
}