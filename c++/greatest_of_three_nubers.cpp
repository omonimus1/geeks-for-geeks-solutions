// https://practice.geeksforgeeks.org/problems/greatest-of-three-numbers2520/1/?problemStatus=unsolved&problemType=functional&difficulty[]=-2&page=2&sortBy=submissions&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]-2page2sortBysubmissions
class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        if(A >= B && A >= C)
            return A; 
        if(B >=A && B >= C)
            return B; 
        if(C >=A && C >=B)
            return C; 
    }
};