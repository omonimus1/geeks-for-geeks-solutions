//https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1
void reverse(char *str, int len)
{
    // Best case: the string is empty or has a single character
    if(len == 0 || len == 1)
        return; 
    // Create the stack used for the reverse
    stack<char>stack_reverser;
    for(int i=0; i < len; i++)
    {
        stack_reverser.push(str[i]);
    }
    for(int i=0; i< len; i++)
    {
       str[i] = stack_reverser.top();
       stack_reverser.pop();
    }
}