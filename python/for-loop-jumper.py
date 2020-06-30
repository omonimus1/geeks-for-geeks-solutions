# https://practice.geeksforgeeks.org/problems/for-loop-2-python/1/?track=python-module-2&batchId=119
def stringJumper(str):
    # Syntax : range(start, stop, step)
    for i in range(0, len(str), 2): ## from 0 to length of str and skip 2
        print(str[i], end="") # Print string in same line

