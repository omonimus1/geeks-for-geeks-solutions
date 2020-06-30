# https://practice.geeksforgeeks.org/problems/cat-and-hat-python/1/?track=python-module-2&batchId=119


"""
    Having a string, returns true if the substring 'cat' compares
    the same number of time of 'hat' in string
"""
def cat_hat(str):
    number_cat = str.count('cat')
    number_hat = str.count('hat')
    
    return number_cat == number_hat
