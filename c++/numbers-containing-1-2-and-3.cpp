// https://practice.geeksforgeeks.org/problems/numbers-containing-1-2-and-32555/1/?track=DSASP-Hashing&batchId=154
unordered_map<int, int>mp;
 void findAll() {
 std::unordered_set<int> s = {1,2,3};
 
    bool flag;
    int single_digit;
    for(int i=1;i<=1000000;i++){
        int number=i;
        flag=true;
        while(number >0){
            int single_digit = number%10;
            number /= 10;
            if(!s.count(single_digit)){
               flag=false;
               break;
            }
        }
        if(flag)
            mp.insert({i,1});
        else
            mp.insert({i,0});
        
    }
 }