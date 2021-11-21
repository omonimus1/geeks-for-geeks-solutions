#https://practice.geeksforgeeks.org/problems/functions-python/1/?track=python-module-4&batchId=119
"""
This whole module deals with functions and methods in Python. Python functions are identified by the def keyword. You've been completing functions for quite a while now, so this time let's try to write a function from scratch.

In this questions, you'll be given a function isPrime() to create. The function should take a number n as parameter and return True if n is prime. Return False in other
"""
def isPrime(n):
    if n<1:
        return False
    # prime numbers are greater than 1
    if n > 1:
        # check for factors
        for i in range(2,int(math.sqrt(n))):
            if (n % i) == 0:
                return False
        return True