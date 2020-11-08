//  https://practice.geeksforgeeks.org/problems/find-the-fine/0/?company[]=Microsoft&problemStatus=unsolved&page=1&query=company[]MicrosoftproblemStatusunsolvedpage1
#include <bits/stdc++.h>
using namespace std;

void  solve_test()
{
    int number_cars, date, i;
    cin >> number_cars >> date;
    int cars[number_cars];
    int penalities[number_cars];
    for(i=0;  i < number_cars; i++)
        cin >> cars[i];
    for(i=0;  i < number_cars; i++)
        cin >> penalities[i];
        
    // Fine is collected from odd-numbered cars on even dates and vice versa.
    long int total = 0; 
    for(i=0;  i < number_cars; i++)
    {
        if(cars[i] % 2 !=0 && date % 2 == 0)
            total += penalities[i];
        else if(cars[i] % 2 ==0 && date % 2!= 0)
            total += penalities[i];
    }
    cout <<total<<endl;
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int t;
    cin >> t;
    while(t--)
    {
        solve_test(); 
    }
    return 0;
}