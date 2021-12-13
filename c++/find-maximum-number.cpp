/*
Given a number N, write a program to find a maximum 
number that can be formed using all of the digits of this number.
https://practice.geeksforgeeks.org/problems/find-maximum-number2152/0/
*/
class Solution {
  public:
    string findMax(string N) {
        sort(N.begin(), N.end());
        reverse(N.begin(), N.end());
        return N; 
    }
};