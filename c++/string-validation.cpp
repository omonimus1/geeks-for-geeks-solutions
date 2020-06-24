// https://practice.geeksforgeeks.org/problems/string-validation/1/?track=DSA-Foundation-Final-String&batchId=193

/*
    Given a string s representing a password, you need to check if the string is 
    valid or not. 
    The string must:
    - have the length greater than or equal to 10.
    - contain at least 1 numeric character.
    - contain at least 1 uppercase character.
    - contain at least 1 lowercase character.
    - contain at least 1 special character from @#$-*.
*/

bool isThereAnUpperCase(string word)
{
    for(int i=0; i < word.size(); i++)
    {
        if(isupper(word[i]))
            return true;
    }
    
    return false;
}

bool isThereALowerCase(string word)
{
    for(int i =0; i < word.size(); i++)
    {
        if(islower(word[i]))
            return true;
    }
    return false;
}

bool isThereANumeric(string word)
{
    for(int i =0; i < word.size(); i++)
    {
        if(isdigit(word[i]))
            return true;
    }
    return false;
}

bool is_there_a_special_char(string word)
{
    for(int i =0; i < word.size(); i++)
    {
        if(word[i] == '@' || word[i] == '#' || word[i] == '$' || word[i] == '-' || word[i] == '*' || word[i] == '.')
            return true;
    }
    return false;
}

bool validate(string s)
{
    // must have the length greater than or equal to 10
    if(s.size() < 10)
        return false;
    // Check if the string  contain at least 1 uppercase character
    else if(!isThereAnUpperCase(s))
        return false;
    // Check if the string contain at least 1 lowercase character.
    else if(!isThereALowerCase(s))
        return false;
    // CHeck if the string contains at least 1 number
    else if(!isThereANumeric(s))
        return false;
    // check if must contain at least 1 special character from @#$-*.
    else if(!is_there_a_special_char(s))
        return false;
    // All the conditions has been satisfied
    return true;
}