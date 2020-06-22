// https://practice.geeksforgeeks.org/problems/vowels-in-string/1/?track=DSA-Foundation-Final-String&batchId=193

int isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
        
    return false;
}

int countVowels(string str){
    int solution = 0;
    for(int i =0; i < str.size(); i++)
    {
        if(isVowel(str[i])) solution++;
    }
    return solution;
    
}