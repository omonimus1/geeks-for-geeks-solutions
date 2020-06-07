//  https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?track=amazon-searching&batchId=192
int majorityElement(int a[], int size)
{
    if(size == 1)
        return a[0];
    if (size == 2)
    {
        if(a[0] == a[1])
            return a[0];
        else 
            return -1;
    }
    
    if(size == 3)
    {
        if(a[0] != a[1] || a[1] != a[2])
            return -1;
    }
    sort(a, a+size);
    int counter = 0;
    for(int i=0; i < size; i++)
    {
        if(counter >= size/2)
            return a[i];
        if(a[i] == a[i+1])
        {    
            counter++;
            continue;
        }
        counter = 0;
    }
    return -1;
}