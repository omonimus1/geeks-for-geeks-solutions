// https://practice.geeksforgeeks.org/problems/count-words-in-string/1/?track=DSA-Foundation-Final-String&batchId=193
/*
    The goal of this exercise function is to calculate the number of words
    in a sentence, where every word is separated by a space.
*/
int countWords(string str){
    int counter = 0;
    for(int i =0; i < str.size(); i++)
    {
        if(str[i] == ' ')
            counter++;
    }
    return counter+1;
}
