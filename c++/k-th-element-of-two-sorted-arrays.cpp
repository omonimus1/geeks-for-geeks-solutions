#include <bits/stdc++.h>
using namespace std;


void fill_array(int *arr, int list_size)
{
    int number;
    for(int i =0; i< list_size; i++)
    {
        cin >> number;
        arr[i] = number;
    }
}

int solve_test()
{
    // Read sizes of the two arrays and position of element to find
    int size1, size2, kth_element; 
    cin >> size1 >> size2 >> kth_element;
    // Declare the two arrays
    int arr1[size1];
    int arr2[size2];
    // Fill out the two lists of numbers
    fill_array(arr1, size1);
    fill_array(arr2, size2);
    // Sort arrays
    sort(arr1, arr1+size1);
    sort(arr2, arr2+size2);
    // Merge two sorted arrays
    int arr3[size2+size1];
    int i, j , k;
    i = k = j = 0;

    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++; 
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
        
    }
    // Check if there are arr1 elements to add (because we reached the end of arr2)
    while(i < size1)
        arr3[k++] = arr1[i++];
    // Check if there are arr2 elements to add (because we reached the end of arr1)
    while(j < size2)
        arr3[k++] = arr2[j++];

    // Return k-th element 
    return arr3[--kth_element];

}

int main()
{
    int t; 
    cin >> t; 
    
    for(int i=0; i<t; i++)
    {
       cout << solve_test()<<endl;
    }
	
	return 0;
}