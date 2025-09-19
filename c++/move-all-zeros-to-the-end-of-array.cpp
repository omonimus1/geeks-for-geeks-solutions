// You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
/*
https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/move-all-zeroes-to-end-of-array0751
*/
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int length = arr.size();
        int next_non_zero_position = 0; // index where the next encountered non-zero should be placed.
        for(int index=0; index < length; index++){
            if(arr[index] != 0){
               if(index!=next_non_zero_position) { // swap only if the positions are different
                  swap(arr[index], arr[next_non_zero_position]);
               }
               next_non_zero_position++;
            }
        }
    }
};