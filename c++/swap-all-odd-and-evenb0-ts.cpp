//

#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std; 


// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
    //User function Template for C++
    vector<bool>binary;    
    cout<<"Number to analize: "<< n <<endl; 
    while(n >0 )
    {
        binary.push_back(n%2);
        n/=2;
    }
    
    int len = binary.size();
    cout<<len<<endl; 
    cout<< "Number in binary"<<endl; 

    reverse(binary.begin(), binary.end());

    for(int i =0; i < binary.size(); i++)
        cout<<binary[i]<<" ";
    


    for(int i =0; i < len-1; i++)
    {
        if(i % 2 == 0)
        {
            swap(binary[i], binary[i+1]);
            i+=1;    
        }
        
    }
    cout<<"After swaps"<<endl;
        for(int i =0; i < binary.size(); i++)
        cout<<binary[i]<<" ";
    unsigned int result=0;
    int power = 1;
    for(int i = len-1; i>=0 ; i--)
    {
        if(binary[i] == true)
        {
            result += pow(2, power);
        }
        power++;
    }
	return result;
}

int main()
{
    unsigned int n = 23;
    unsigned int result = swapBits(n);
    cout<<"Result: " << result <<endl;
    return 0;
}