class Solution:
    def display(self,node):
        while node is not None:
            print(node.data, end=' ')
            node = node.next