"""
https://practice.geeksforgeeks.org/problems/anagram-1587115620/1?page=1&category[]=Strings&curated[]=1&sortBy=submissions
"""
class Solution:
    #Function is to check whether two strings are anagram of each other or not.
    def isAnagram(self,a,b):
        if len(a) != len(b):
            return 'NO'
        if a == b[::-1]:
            return 'YES'
        return 'NO'