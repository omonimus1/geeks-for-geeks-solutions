class Solution
{   
    public:
    void reverseCol(vector<vector<int> > &matrix)
    {
        int row = matrix.size();
        int column = matrix[0].size();
        int left = 0, right = column -1;
        while (left<right)
       {
           for (int i=0; i<row; i++){
           swap(matrix[i][left], matrix[i][right]);
           }
           left++;
           right--;
           
       }
    }
};