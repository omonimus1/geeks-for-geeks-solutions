#include <bits/stdc++.h>
using namespace std;

void solve_test()
{
    // Read number in input
    long int number = 10;
    int i;
    cin >> number;
    // Convert number to binary 
    vector<bool>bits;
    for(i=0; number>0; i++)    
    {
        bits.push_back(number % 2);
        number /= 2;
    }
    // Set bits at the odd index to 1
    int position=1;
    for(i =0; i < bits.size(); i++)
    {
        //elemenet_id = i+1;
        if(position % 2 != 0  && bits[i] == 0)
            bits[i] = 1;
        position++;
    }

    // Print the numerical version of our binary format number
    int power = 0;
    long int result = 0; 
    for(i = bits.size()-1; i >=0; i--)
    {
        // Check if the bit is set
        if(bits[i] == 1)
        {
            result += pow(2, power);
        }
        power++;
    }
    
    cout << result << endl; 
}

int main()
{
    int t; 
    cin >> t; 
    
    while(t--)
        solve_test();
	
	return 0;
}