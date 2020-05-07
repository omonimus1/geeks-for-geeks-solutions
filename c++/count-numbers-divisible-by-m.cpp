// https://practice.geeksforgeeks.org/problems/count-numbers-divisible-by-m/0
#include <iostream>
using namespace std;


int main()
{
    int number_of_test_cases, a, b, m, counter; 
    cin >> number_of_test_cases; 
    
    while(number_of_test_cases--)
    {
        counter = 0;
        cin >> a >> b >> m;
        for(int i =a;  i<= b; i++)
        {
            if(i%m == 0)
                counter++;
        }
        cout <<counter<<endl;
    }
	
	return 0;
}