// https://practice.geeksforgeeks.org/problems/lowercase-to-upercase/1/?track=DSA-Foundation-Final-String&batchId=193
string caseConversion(string str){
    for(int i =0; i< str.size(); i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
    }
    return str;
}