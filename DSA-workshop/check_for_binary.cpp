// https://practice.geeksforgeeks.org/problems/check-for-binary/1/?track=dsa-workshop-1-strings&batchId=308
bool isBinary(string str)
{
   for(int i =0; i < str.size(); i++)
   {
       if(str[i] != '0' && str[i] != '1')
            return false;
   }
   return true; 
}