// https://practice.geeksforgeeks.org/problems/c-friend-function/1/
bool isAnagram(string name, string surname)
{
    if(name.size() != surname.size())
        return false;
    else
    {
        sort(name.begin(), name.end());
        sort(surname.begin(), surname.end());
        for(int i =0; i< name.size(); i++)
        {
            if(name[i] != surname[i])
                return false;
        }
        return true;
    }
}

void check_name(student k)
{
    if (isAnagram(k.first_name, k.last_name))
        cout <<"ANAGRAM"<<endl;
    else
        cout << "NOT ANAGRAM"<<endl;
}