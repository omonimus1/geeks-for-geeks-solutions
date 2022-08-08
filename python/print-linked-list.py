"""
https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
"""
class Solution:
    def display(self,node):
        while node:
            print(node.data, end=" ")
            node = node.next