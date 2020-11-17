//  https://practice.geeksforgeeks.org/problems/mean0021/1/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1
class Solution {
  public:
    int mean(int N , int A[]) {
        int mean_result = 0; 
        for(int i =0; i < N; i++)
            mean_result += A[i];
        return mean_result/N; 
    }
};