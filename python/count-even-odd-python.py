#  https://practice.geeksforgeeks.org/problems/count-even-odd-python/1/?track=python-module-5&batchId=119
def count_even_odd(n, arr):
    c_e = 0
    c_o = 0
    
    pair = list()
    
    # your code here
    for x in arr:
        if x%2 == 0:
            c_e += 1
        else:
            c_o += 1
    
    pair.append(c_e)
    pair.append(c_o)
    
    return pair

