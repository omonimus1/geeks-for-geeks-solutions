// https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1/?track=DSA-Foundation-Final-Recursion&batchId=193
void printNos(int N)
{
    if(N==0)
        return;
    printNos(N-1);
    cout << N << " ";
}