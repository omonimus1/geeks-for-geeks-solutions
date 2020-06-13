// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1/?track=sp-bit-magic&batchId=152

bool isPowerofTwo(long long n){
    
    if(n == 0)
        return false;
    if(n == 1 || n == 2) 
        return true;
    
    return (ceil(log2(n) == floor(log2(n))));
}