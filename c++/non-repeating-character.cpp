// https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1/?track=DSA-Foundation-Final-Hashing&batchId=193
char nonrepeatingCharacter(string S)
{
   unordered_map<char, int>mp;
   for(int i =0; i < S.size(); i++)
   {
       mp[S[i]]++;
   }
   

   unordered_map<char, int>::iterator itr;
   
   for(int i=0; i < S.size(); i++)
   {
        if(mp[S[i]] == 1)
            return S[i];
   }
   return '$';
}