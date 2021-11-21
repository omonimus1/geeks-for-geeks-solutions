# https://practice.geeksforgeeks.org/problems/check-the-status/1/?track=python-module-2&batchId=119
"""
Given two integer variables a and b, and a boolean variable flag. The task is to check the status and return accordingly.
Return "True" if either a or b (only one of them) is positive except for the case when flag is True, return True only if both of the variables a and b are negative except for the case when flag is False.
"""
def check_status(a, b, flag):
    if (a>0 and b<0) or (a<0 and b>0):
        return not flag
    elif (a < 0 and  b <0):
        return flage