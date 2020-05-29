#include <iostream>
#include <vector>
using namespace std;

int solve_test()
{
    //  Declare and Read Number
    int number = 100;
    cout << "Number is" <<number <<endl;
    // cin >> number; 
    if(number == 0)
        return 0;
    else if(number == 1)
        return 1; 
    else if(number == 2)
        return 2;  
    vector<bool> bits;
    int position=0;
    // Convert Number to binary
    for(int i =0; number > 0; i++)
    {
        cout << "current number is " << number<<endl;
        bits.push_back(number %2);
        cout << "bit added "<<number%2<<endl;
        number /= 2;
        cout << "number /=2 is "<< number<<endl;
    }
    //bits.push_back(0);
    // DEBUG: PRINT BITS VECTOR
    for(int i =0; i < bits.size(); i++)
        cout << bits[i] << " ";
    cout <<endl;
    // From the right, find the value of the first set value
    for(int i = bits.size()-1; i >=0; i--)
    {
        position++;
        if(bits[i] == 1)
            return position;
    }
    return 0; 
}

int main()
{
    int t=1; 
    //cin >> t; 
    
    while(t--)
        cout <<"Solution " << solve_test()<<endl;
	
	return 0;
}