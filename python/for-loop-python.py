# https://practice.geeksforgeeks.org/problems/for-loop-python/1/?track=python-module-2&batchId=119

def multiplicationTable(N):## in is a membership operator that is true if something is a member of sequence
    for i in range (1,11):       ## i in range(x,y,z) means i goes from x to y-1 and increments z steps in each iteration
        print(i*N, end=" ") ## Separating by spaces using end =" "
        
