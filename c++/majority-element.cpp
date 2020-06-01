#include <iostream>
using namespace std;

int get_majority_element()
{
    int n=14, number;
    // cin >> n;
    int arr[n] = {1,2,0,1,0,0,0,1,0,0,2,0,1,0};
    /*for(int i =0; i <n; i++)
    {
        cin  >> number;
        arr[i] = number;
    }
    */
    

    int half_size = n/2;
    // Get Majority element 
    for(int i =0; i< n; i++)
    {
        int counter = 0;
        for(int j=0; j <n; j++)
        {
            cout<<"Conter "<< counter<< "  arr[i]: "<<arr[i] << "  arr[j]: "<<arr[j]<< endl;
            if(counter >= half_size)
                return arr[i];
            if(arr[i] == arr[j])
                counter++;
        }
    }
    return -1;
}

int main()
{
    int t=1; 
    //cin >> t; 
    
    while(t--)
        cout <<get_majority_element()<<endl;
    
	
	return 0;
}