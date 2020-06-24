// https://practice.geeksforgeeks.org/problems/count-distinct-vowels-in-string/1/?track=DSA-Foundation-Final-String&batchId=193
/*
    Count the total distinct vowels in the string
*/
bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
       || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
        
    return false;
}


int countVowels(string str){
    set<char>s;
    for(int i =0; i < str.size(); i++)
    {
        if(isVowel(str[i]))
            s.insert(str[i]);
    }
    return s.size();
}