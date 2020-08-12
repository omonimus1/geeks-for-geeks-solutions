//  https://practice.geeksforgeeks.org/problems/check-for-binary/1/?track=ppc-strings&batchId=221
// Return true if str is binary, else false
bool isBinary(string str)
{
    for(int i =0; i< str.size(); i++)
    {
        if(str[i] != '1' && str[i] != '0')
            return false; 
    }
    return true; 
}