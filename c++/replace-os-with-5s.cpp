// https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?track=amazon-arrays&batchId=192
int convertFive(int n) {
    string number = to_string(n);
    for(int i =0; i< number.size(); i++)
    {
        if(number[i] == '0')
            number[i] = '5';
    }
    // Return converted number
    return stoi(number); 
}