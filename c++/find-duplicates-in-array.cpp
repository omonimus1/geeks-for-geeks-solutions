// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1/?track=amazon-arrays&batchId=192
vector<int> duplicates(int a[], int n) {
    sort(a, a+n);
    vector<int>solution;
    for(int i=0; i < n-1; i++)
    {
        if(a[i] == a[i+1])
        {
            solution.push_back(a[i]);
            while(a[i+1] == a[i])
                i++;
        }
    }
    if(solution.size()==0)
        solution.push_back(-1);
    return solution; 
}
    