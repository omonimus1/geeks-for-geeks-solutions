// https://practice.geeksforgeeks.org/problems/inorder-traversal-and-bst/0
/*
Check if a list of numbers represents the inorder traversal of a BST
*/
#include <bits/stdc++.h>
using namespace std;

bool solve_test()
{
    // Read size of the list
    int n;
    cin >> n;
    // Read list
    int vect[n];
    // Fill array
    for(int i =0; i< n; i++) cin >> vect[i];
    
    // Case 1: Root is NULL or it has just a node
    if (n <= 1)
        return 1;
    else if(n==2)
    {
       if(vect[0] < vect[1])
            return 1;
       return 0;
    }
        
    for(int i=0; i < n-1; i++)
    {
        for(int j= i+1; j < n; j++)
        {
            if(vect[i] == vect[j])
                return 0;
            else if(vect[j] < vect[i])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        cout<<solve_test()<<endl;
	
	return 0;
}