#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int get_single()
{
    // Read number of people
    int id_couple, n;
    cin >> n;
    // Corne case: we have just one person
    if(n==1)
    {
        cin >> id_couple;
        return id_couple;
    }
    //Store couples number
    vector<int>couples;
    for(int i =0; i < n; i++)
    {
        cin >> id_couple;
        couples.push_back(id_couple);
    }

    // Sort list
    sort(couples.begin(), couples.end());

    // Find single
    for(int i =0; i< n; i+=2)
    {
        if(i == n-1)
            return couples[i];
        else if(couples[i] != couples[i+1])
            return couples[i];
    }
}

int main()
{
    int t=1; 
    cin >> t; 
    
    while(t--)
        cout <<get_single()<<endl;
	
	return 0;
}