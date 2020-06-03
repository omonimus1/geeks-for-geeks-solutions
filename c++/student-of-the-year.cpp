//https://practice.geeksforgeeks.org/problems/student-of-the-year/1/
bool comp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second > p2.second)
        return true;
    else if(p1.second == p2.second && p1.first < p2.first)
        return true;
    return false;
}

vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N){
    sort(v.begin(), v.end(), comp);
    return v;
}
