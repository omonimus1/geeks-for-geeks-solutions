// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1/?track=ppc-arrays&batchId=221
int remove_duplicate(int A[],int N)
{
    set<int>s;
    for(int i =0; i < N; i++)
        s.insert(A[i]);
        
    int i=0;
    set<int> ::iterator itr;
    for(itr= s.begin(); itr != s.end(); itr++)
    {
        A[i] = *itr;
        i++;
    }
    return i; 
}