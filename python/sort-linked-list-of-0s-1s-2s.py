"""
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
"""

class Solution:
    #Function to sort a linked list of 0s, 1s and 2s.
    def segregate(self, head):
        copy_head_start = head
        number=""
        while copy_head_start:
            number += (str(copy_head_start.data))
            copy_head_start = copy_head_start.next
        number = sorted(number)
        copy_head_start = head
        for digit in number:
            copy_head_start.data = int(digit)
            copy_head_start = copy_head_start.next
        return head