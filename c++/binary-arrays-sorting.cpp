// https://practice.geeksforgeeks.org/problems/binary-array-sorting5355/1/?track=amazon-arrays&batchId=192
vector<int> SortBinaryArray(vector<int> binArray)
{
    int ones=0, zeros=0;
    int len = binArray.size();
    
    for(int i =0; i < len; i++)
    {
        if(binArray[i] == 1)
            ones++;
        else
            zeros++;
    }
    
    int i =0;
    while(zeros !=0)
    {
        binArray[i] = 0;
        zeros--;
        i++;
    }
    
    while(ones != 0)
    {
        binArray[i] = 1;
        ones--;
        i++;
    }
    return binArray;
}
