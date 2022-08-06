# https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1
"""
Given a number N. The task is to complete the function convertFive() which replace 
all zeros in the number with 5 and returns the number.z
"""
class Solution:
    def convertFive(self,n):
        number = str(n)
        return number.replace('0', '5')
        return int(number)