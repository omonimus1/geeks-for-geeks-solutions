// https://practice.geeksforgeeks.org/problems/uppercase-to-lowercase/1/?track=DSA-Foundation-Final-String&batchId=193
string caseConversion(string str){
    for(int i =0; i < str.size(); i++)
    {
        if(isupper(str[i]))
            str[i] = tolower(str[i]);
    }
    return str;   
}
