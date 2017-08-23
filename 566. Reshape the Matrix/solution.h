#ifndef INC_566_RESHAPE_THE_MATRIX_SOLUTION_H
#define INC_566_RESHAPE_THE_MATRIX_SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        size_t old_i = 0, old_j = 0;
        size_t old_row = nums.size(), old_col = nums[0].size();
        vector<vector<int>> new_nums = vector<vector<int>>((size_t)r);

        if (old_row * old_col != r * c) return nums;

        for (int i = 0; i < r; ++i) {
            new_nums[i] = vector<int>((size_t)c);
            for (int j = 0; j < c; ++j) {
                if (old_j >= old_col){
                    ++old_i;
                    old_j = 0;
                }
                new_nums[i][j] = nums[old_i][old_j++];
            }
        }

        return new_nums;
    }
};

#endif //INC_566_RESHAPE_THE_MATRIX_SOLUTION_H
