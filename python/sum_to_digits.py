# https://practice.geeksforgeeks.org/contest-problem/two-digit-sum/1/

def digitsSum(n):
    # Get single digits
    n = str(n)
    return (int(n[0])+int(n[1]))