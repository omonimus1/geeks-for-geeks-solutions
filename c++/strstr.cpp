#include <iostream>

using namespace std;

int main()
{
    string s = "GeeksForGeeks";
    string x = "For";
    if(s.size() == x.size())
    {
        if(s != x)
            return -1;
        else
            return 0;
    }    
    bool found = true;

     for(int i =0; i< s.size()-1; i++)
     {
         if(s[i] == x[0])
         {
             //cout << "Insaide iffff"<<endl;
             int possible_start_index =i;
             int end =  i + x.size()-1;
             for(int j=i+1; j = end; j++)
             {
                 cout << "s: " <<s[j]<< "---"<<x[j]<<endl;
                 if(s[j] != x[j])
                 {
                     found = false;
                     break;
                 }    
             }
             if(found)
                cout << possible_start_index<<endl;
                // return possible_start_index;
         }
     }
     
    if(! found) cout <<-1<<endl;
    // return -1; 
    return 0;
}