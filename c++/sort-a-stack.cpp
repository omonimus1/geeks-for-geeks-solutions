// https://practice.geeksforgeeks.org/problems/sort-a-stack/1/?track=ppc-stack&batchId=221
void SortedStack :: sort()
{
    vector<int> vec;
    while(!s.empty())
    {
    vec.push_back(s.top());
    s.pop();
    }
    
    std::sort(vec.begin(), vec.end());
    
    for(int i = 0; i < vec.size(); i++)
    s.push(vec[i]);
}