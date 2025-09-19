/* https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735 */
/* Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element. */
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        unsigned int lenght = arr.size();
        sort(arr.begin(), arr.end());
        int highest = arr[lenght-1];
        for(int i = lenght-1; i>=0; i--){
            if(arr[i] < highest) {
                return arr[i];
            }
        }
        return -1;
    }
};

