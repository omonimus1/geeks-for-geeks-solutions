// https://practice.geeksforgeeks.org/problems/max-and-second-max/1/?track=amazon-arrays&batchId=192

vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    vector<int>solution;
    // There is just one element;
    if(sizeOfArray == 1)
    {
        solution.push_back(arr[0]);
        solution.push_back(-1);
        return solution;
    }
    sort(arr, arr+sizeOfArray);
    // There are two elements
    if(sizeOfArray == 2)
    {
        solution.push_back(arr[1]);
        if(arr[0] == arr[1])
            solution.push_back(-1);
        else
            solution.push_back(arr[0]);
        return solution;
    }
    
    // There are more than three elements
    solution.push_back(arr[sizeOfArray-1]);
    for(int i= sizeOfArray-2; i>=0; i--)
    {
        if(arr[i] < solution[0])
        {
            solution.push_back(arr[i]);
            return solution;
        }
    }
    solution.push_back(-1);
    return solution; 
}