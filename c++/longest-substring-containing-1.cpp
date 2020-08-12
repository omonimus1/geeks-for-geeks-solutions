// https://practice.geeksforgeeks.org/problems/longest-substring-containing-1/1/?track=ppc-strings&batchId=221
int maxlength( string s)
{
    int len = s.size();
    int biggest = INT_MIN;
    int counter; 
    
    for(int i =0; i < len; i++)
    {
        counter = 0;
        while(s[i] == '1' && i < len)
        {
            i++;
            counter+=1;
        }
        if(counter > biggest)
            biggest = counter;
    }
    return biggest; 
}