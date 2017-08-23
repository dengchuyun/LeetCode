#ifndef INC_566_RESHAPE_THE_MATRIX_SOLUTION_H
#define INC_566_RESHAPE_THE_MATRIX_SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        size_t old_row = nums.size(), old_col = nums[0].size();
        size_t elem_num = old_row * old_col;
        vector<vector<int>> new_nums((size_t)r);

        if (old_row * old_col != r * c) return nums;

        for (int i = 0; i < elem_num; ++i)
            new_nums[i/c].push_back(nums[i/old_col][i%old_col]);

        return new_nums;
    }
};

#endif //INC_566_RESHAPE_THE_MATRIX_SOLUTION_H
