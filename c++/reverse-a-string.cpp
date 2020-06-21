// https://practice.geeksforgeeks.org/problems/reverse-a-string/1/?track=DSA-Foundation-Final-String&batchId=193
string reverseWord(string str){
    
    int end = str.size()-1;
    for(int i = 0; i < str.size()/2; i++)
    {
        swap(str[i], str[end]);
        end--;
    }
    return str; 
}