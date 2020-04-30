// https://practice.geeksforgeeks.org/problems/front-to-back/1
//Complete this function. it1 points to vector.begin(), it2 points to vector.end()
void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    //Your code here. Use iterator to print all the elements
    vector<int>::iterator it;
    for(it = it1; it !=it2; it++)
        cout<<*it<<" ";
    cout<<endl;
}