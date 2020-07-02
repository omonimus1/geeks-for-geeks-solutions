// https://practice.geeksforgeeks.org/problems/missing-characters-in-panagram/1/?track=DSA-Foundation-Final-String&batchId=193
string missingPanagram(string str){
    vector<bool>mark(26, false);
    int index;
    for(int i = 0; i< str.size(); i++)
    {
        // str[i] is Uppercase
        if('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';
        
        // str[i] is Lowercase
        else if('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';
            
        // If we have a special char or non english alphabet character
        else
            continue;
            
        mark[index] = true;
    }
    
    string result = "";
    for(int i =0; i < 26; i++)
    {
        if(mark[i] == false)
            result.push_back(char('a'+i));
    }
    
    if(result != "")
        return result;
    else
        return "-1";
}