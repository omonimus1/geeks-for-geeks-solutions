# https://practice.geeksforgeeks.org/problems/intro-to-lists-python/1/?track=python-module-5&batchId=119
def check_zero(size_array, arr):
    
    # complete the if statement to check
    # if first or last element in list is 0
    if arr[0] == 0 or arr[size_array-1] == 0 :
        return True

    return False
