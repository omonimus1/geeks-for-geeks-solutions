//  https://practice.geeksforgeeks.org/problems/pair-sum-in-vector/1
void sum(vector<pair<int,int>>v)
{
    long int sum=0;
    // Calculate the sum of the second element of the pair
    for(int i =0; i< v.size(); i++)
        sum += v[i].second;
    cout<<sum<<endl;
}