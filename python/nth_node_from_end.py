"""
https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?page=1&category[]=Linked%20List&curated[]=1&sortBy=submissions
Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
"""
def getNthFromLast(head,n):
    number_of_nodes = 0
    my_list = []
    while head:
        number_of_nodes +=1
        my_list.append(head.data)
        head = head.next
    element_location = number_of_nodes -n
    # add out-of-index check out manage corner cases where location of element 
    # overcome list dimension
    if element_location < 0 or element_location > number_of_nodes:
        return -1
    return my_list[number_of_nodes - n]
