// https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1/?problemStatus=unsolved&difficulty[]=-2&page=1&query=problemStatusunsolveddifficulty[]-2page1
class Solution{
public:
    int sumOfDigits(int N){
        int sum_digits = 0;
        while(N  >0)
        {
            sum_digits += N%10;
            N /=10; 
        }
        return sum_digits;
    }
};