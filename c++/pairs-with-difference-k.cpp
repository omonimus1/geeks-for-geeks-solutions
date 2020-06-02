// https://practice.geeksforgeeks.org/problems/pairs-with-difference-k/0/
#include <iostream>
using namespace std;

int number_of_pairs()
{
    int list_size, k;
    cin >> list_size >> k;
    int i, j;
    int arr[list_size];
    for(int i =0; i< list_size; i++)
    {
        cin >> arr[i];
    }
    int number_of_pairs = 0;
    for(i=0; i < list_size; i++)
    {
        for(j=i-1; j>=0 ; j--)
        {
            if(arr[i] - arr[j] == k || arr[j] - arr[i] == k)
                number_of_pairs++;
        }
    }
    return number_of_pairs;
}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
        cout << number_of_pairs()<<endl;
    }
	
	return 0;
}