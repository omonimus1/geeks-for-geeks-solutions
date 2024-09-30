//  https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1?page=2&difficulty=Basic&sortBy=submissions
//  Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.
class Solution {
  public:
    long long sumOfSeries(long long n) {
        if(n==0){
          return 0;
        }
        return n*n*n + sumOfSeries(n-1);
    }
};
