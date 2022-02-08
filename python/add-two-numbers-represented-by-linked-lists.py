#https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1/?track=DSASP-LinkedList&batchId=154
def extractNumberFromList(linked_list):
    result = ""
    while linked_list is not None:
        result += str(linked_list.data)
        linked_list = linked_list.next
    if result == "":
        return 0
    return result


class Solution:
    def addTwoLists(self, first, second):
        number_one = int(extractNumberFromList(first))
        second_number = int(extractNumberFromList(second))
        result = str(number_one + second_number)
        for x in result:
            print(x, end=' ')
        