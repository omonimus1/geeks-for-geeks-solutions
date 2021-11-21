# https://practice.geeksforgeeks.org/problems/if-loop-python/1/?track=python-module-2&batchId=119
def friends_in_trouble(j_angry, s_angry):
    if j_angry and s_angry or not j_angry and not s_angry:
        return True
    return False
