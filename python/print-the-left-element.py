"""
https://practice.geeksforgeeks.org/problems/print-the-left-element2009/1?page=1&difficulty[]=-2&status[]=unsolved&sortBy=submissions
Given a array of length N, at each step it is reduced by 1 element. 
In the first step the maximum element would be removed, while in the second 
step minimum element of the remaining array would be removed, in the third step 
again the maximum and so on. Continue this till the array contains only 1 element. 
And find the final element remaining in the array.
"""

class Solution:
    def leftElement(self, arr, n):
        arr.sort()
        """
        # Inefficient, it would give time limit
        for iteration in range(1, n):
            if iteration %2 !=0:
                arr = arr[:-1]
            else:
                arr.pop(0)
        
        return arr[0]
        """
        if n % 2 == 0:
            return arr[(n // 2)-1]
        else:   
            return arr[ n // 2]
        