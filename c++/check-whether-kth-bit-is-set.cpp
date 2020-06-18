// https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1/?track=ppc-bit-magic&batchId=221
// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    return (n>>k)&1;
}