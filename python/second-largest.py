# // https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
"""
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.
"""
class Solution:
    def getSecondLargest(self, arr):
        arr.sort(reverse=True)
        highest = arr[0]
        for number in arr:
            if number < highest:
                return number
        return -1
