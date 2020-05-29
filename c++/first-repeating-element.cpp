// https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/
int firstRepeated(int arr[], int n) {
    for(int i =0; i< n; i++)
    {
        for(int j =0; j< n; j++)
        {
            if(i==j)
                continue;
            if(arr[i] == arr[j])
                return ++i;
        }
    }
    return -1;
}