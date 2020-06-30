# https://practice.geeksforgeeks.org/problems/jumping-through-while-python/1/?track=python-module-2&batchId=119
def printIncreasingPower(x):
    i = 1
    # Loop to jump in powers of 2
    while(pow(i,2) <= x):
        ##Your code here
        print (pow(i,2), end = " ")
        i += 1
    
