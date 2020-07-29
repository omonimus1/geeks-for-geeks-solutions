// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?track=amazon-searching&batchId=192
int MissingNumber(vector<int>& array, int n) {
    
    int len = array.size();
    
    
    if(len==1)
    {
        if(array[0] >=2)
            return 1; 
        else
            return 1+array[0];
    }
    
    sort(array.begin(), array.end());

    for(int i =0 ; i  < len; i++)
    {
        if(array[i] != i+1)
        {
            i+=1;
            return  i; 
        }
    }
    return (array[len-1]+1);
}