#include <iostream>
using namespace std;


int main()
{
    long int number, list_size, test_cases, counter; 
    cin >> test_cases; 
    
    while(test_cases--)
    {
        counter = 0; 
        cin >> list_size; 
        for(int i=0; i< list_size; i++)
        {
            cin >> number;
            if(number == 0)
                counter++;
        }
        cout << counter << endl;
    }
	return 0;
}