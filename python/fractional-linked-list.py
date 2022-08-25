"""
https://practice.geeksforgeeks.org/problems/find-nk-th-node-in-linked-list/1?page=1&category[]=Linked%20List&curated[]=8&sortBy=submissions
Given a singly linked list and a number k. Write a function to find the (N/k)th element,
 where N is 
the number of elements in the list. We need to consider ceil value in case of decimals.
Input:
The first line of input contains an integer T denoting the number of
 test cases. The first line of each test case consists of an integer N. The second line 
 consists of N spaced integers.The last line consists of an integer k.

Output:
Print the data value of (N/k)th node in the Linked List.
"""


def fractionalNodes(head,k):
    # If linked list is empty or K is zero (leading to an error during division)
    if(k<=0 or head is None):
        return None
    fractionalNodes=None
    temp=head
    i=0
    while(temp is not None):
        temp=temp.next
        if(i%k==0):
            if(fractionalNodes is None):
                fractionalNodes=head
            else:
                fractionalNodes=fractionalNodes.next
        i=i+1
    return fractionalNodes