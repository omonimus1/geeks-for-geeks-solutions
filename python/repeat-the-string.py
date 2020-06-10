# https://practice.geeksforgeeks.org/problems/repeat-the-strings/1/?track=python-module-3&batchId=119
def combo_string(a, b):
  # your code here
  if(len(a) > len(b)):
     return b+a+b
  return a+b+a

