#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve_test()
{
    int list_size, number;
    vector<int> positive, negative;
    int i;
    /*for(i=0; i< list_size; i++)
    {
        cin >> number;
        if (number >=0)
            positive.push_back(number);
        else
            negative.push_back(number);
    }*/
    
   /*positive.push_back(2);
   positive.push_back(1);
   positive.push_back(56);
  -8 -66 -60   */
   negative.push_back(-8);
   negative.push_back(-66);
   negative.push_back(-60);
    
    // Sort the two list
    sort(positive.begin(), positive.end());
    sort(negative.begin(), negative.end());
    for(i=0; i<  3; i++)
        cout << " negative"<< negative[i]<<endl;

    // Case 1: there are just positive numbers
    if(negative.size() == 0 && positive.size() !=0)
        return  positive[0] + positive[1];
    // Case 2: there are just negative numers
    if(negative.size() != 0 && positive.size() ==0)
        return negative[negative.size()-2] + negative[negative.size()-1];
    // Case 3: there are both negative and positive numbers
    return positive[0] + negative[negative.size()-1];
}

int main()
{
    int t=1; 
    //cin >> t; 
    
    while(t--)
        cout <<solve_test()<<endl;
	
	return 0;
}