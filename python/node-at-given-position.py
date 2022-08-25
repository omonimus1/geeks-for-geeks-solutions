# https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1?page=1&category[]=Linked%20List&curated[]=8&sortBy=submissions
"""
Given a singly linked list with N nodes and a number X. The task is to find 
the node at the given index (X)(1 based index) of linked list. 

Input:
First line of input contains number of testcases T. For each testcase, 
first line of input contains space seperated two integers,
length of linked list and X.
"""

def getNth(head, k):
    position = 1
    while head.next is not None and position <= k-1:
        position+=1
        head = head.next
    return head.data