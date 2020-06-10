# https://practice.geeksforgeeks.org/problems/is-and-in-operator/1/?track=fork-python&batchId=119
#Function to find if number is present in the list or not
def number_present(num, query):
    #num is a 'list', query is a 'int'
    for x in num:  
        if x is query: 
            return True
    return False 
