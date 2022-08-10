"""
Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.
https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1?page=1&company[]=Amazon&curated[]=8&sortBy=submissions
"""
class Solution:
	def findMaximum(self,arr, n):
		arr = sorted(arr)
		return arr[-1]