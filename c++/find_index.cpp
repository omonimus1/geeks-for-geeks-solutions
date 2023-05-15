// https://practice.geeksforgeeks.org/problems/find-index4752/1?page=1&difficulty[]=-2&status[]=unsolved&sortBy=submissions
vector<int> findIndex(int a[], int n, int key)
{
    vector<int> solution;
    int left_index = -1, right_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            left_index = i;
            break;
        }
    }
    for (int i = n - 1; i >= left_index; i--)
    {
        if (a[i] == key)
        {
            right_index = i;
            break;
        }
    }
    solution.push_back(left_index);
    solution.push_back(right_index);
    return solution;
}