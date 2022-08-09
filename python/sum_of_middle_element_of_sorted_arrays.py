"""
https://practice.geeksforgeeks.org/problems/sum-of-middle-elements-of-two-sorted-arrays2305/1?page=2&company[]=Amazon&category[]=Arrays&curated[]=1&sortBy=submissions
Given 2 sorted arrays Ar1 and Ar2 of size N each. 
Merge the given arrays and find the sum 
of the two middle elements of the merged array.
"""
class Solution:
	def findMidSum(self, ar1, ar2, n): 
	    merged = sorted(ar1 + ar2)
		return merged[n-1] + merged[n]