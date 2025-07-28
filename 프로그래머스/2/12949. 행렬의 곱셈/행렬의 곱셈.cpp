#include <string>
#include <vector>

using namespace std;

    vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {

        int row = arr1.size();
        int col = arr2[0].size();

        int col2 = arr1[0].size();

        vector<vector<int>> result(row, vector<int>(col, 0));
        
        for(int i = 0; i < row; i++ )
        {
            for (int j = 0; j < col; j++)
            {
                for (int k = 0; k < col2; k++)
                    result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }

        return result;
    }