// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1/?track=amazon-arrays&batchId=192
//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int>solution;
    int j=0, i=0;
    while(i < n && j < m)
    {
        if(arr1[i] == arr2[j])
        {
            solution.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j])
        {
            solution.push_back(arr2[j]);
            j++;
        }
        else
        {
            solution.push_back(arr1[i]);
            i++;
        }
    }
    
    while(i <n)
    {
        solution.push_back(arr1[i]);
        i++;
    }
    while(j<m)
    {
        solution.push_back(arr2[j]);
        j++;
    }
    
    // sort vector
    sort(solution.begin(), solution.end());
    
    vector<int>::iterator itr;
    
    itr = unique(solution.begin(), solution.end());
    
    solution.resize(distance(solution.begin(), itr));
    return solution; 
}