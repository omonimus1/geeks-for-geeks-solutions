#include <iostream>
using namespace std;

void solve_test()
{
    string s;
    cin >> s;
    
    for(int i=0; i<s.size(); i++)
    {
        for(int a =i+1; a < s.size(); a++)
        {
            if(s[i] == s[a])
            {
                cout << s[i]<<endl;
                return;
            }
        }
    }
    cout << "-1" <<endl; 
}

int main()
{
    unsigned long int test_cases; 
    cin >> test_cases; 
    
    while(test_cases--)
        solve_test();

	return 0;
}
