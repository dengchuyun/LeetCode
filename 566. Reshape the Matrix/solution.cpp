#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        size_t old_row = nums.size(), old_col = nums[0].size();
        size_t count = 0;
        vector<vector<int>> new_nums((size_t)r);

        if (old_row * old_col != r * c) return nums;

        for (int i = 0; i < old_row; ++i)
            for (int j = 0; j < old_col; ++j)
                new_nums[count++/c].push_back(nums[i][j]);

        return new_nums;
    }
};
