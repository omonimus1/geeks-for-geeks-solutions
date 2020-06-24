// https://practice.geeksforgeeks.org/problems/panagram-checking/1/?track=DSA-Foundation-Final-String&batchId=193
/*
    If a string is panagram, return true, false otherwise;

    A word is panagram if it contains at least once all the letters of the english 
    alphabet.
*/

bool isPanagram(string str){
    // English alphabet has 26 characters
    if(str.size() < 26)
        return false; 
    
    // Create hash table to mark the present character
    // Declare a vector of 26 element and set of all them to false
    vector<bool>mark(26, false);
    int index;
    for(int i =0; i < str.size(); i++)
    {
        // If the character is Uppercade
        if('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        // Else if the chacater is lowercase
        else if('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
        // We have a special character or a non-english alphabet character
        else
            continue;
        
        mark[index] = true;
    }
    
    
    for(int i =0; i <= 25; i++)
    {
        // If at least one english character is not present, return false
        if(mark[i] == false)
            return false;
    }
    // All the english characters are present
    return true;
}