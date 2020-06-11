// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1/?track=ppc-hashing&batchId=221
bool check(vector<ll> arr, vector<ll> brr, int n) {
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    for(int i =0; i < arr.size(); i++)
    {
        if(arr[i] != brr[i])
            return false;
    }
    return true;
}