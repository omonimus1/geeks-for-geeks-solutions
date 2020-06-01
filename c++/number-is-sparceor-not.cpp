// https://practice.geeksforgeeks.org/problems/number-is-sparse-or-not/0/?track=md-bm&batchId=144
#include <iostream>
#include <string>
using namespace std;

bool isSparse(int number)
{
    // Test case 1:
    if(number <=2)
        return true;
    // Convert number to binary representation
    string binary_representation = "";  
    while(number > 0)
    {
        binary_representation.push_back(char(number % 2));
        number /= 2;
    }
   // Check if it is parse or not
    for(int i =0; i < binary_representation.size()-1; i++)
    {
        if(binary_representation[i] == 1 &&  binary_representation[i] == binary_representation[i+1])
            return false;
    }

    return true; 
}

int main()
{
    int t, number;
    cin >> t;
    while(t--)
    {
        cin >> number;
        if(isSparse(number))
            cout << 1<<endl;
        else
            cout << 0 << endl;
            
    }
}