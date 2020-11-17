class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum_of_elements=0;
        for(int i =0; i < N; i++)
        {
            for(int j=0;  j < M; j++)
                sum_of_elements += Grid[i][j];
        }
        return sum_of_elements;
    }
    
};