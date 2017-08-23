#include <iostream>
#include "solution.h"

int main() {
    vector<vector<int>> nums = vector<vector<int>>(2);
    vector<vector<int>> new_nums;
    Solution solution = Solution();

    for (int i = 0; i < 2; ++i)
        nums[i] = vector<int>(2);
    nums[0][0] = 1;
    nums[0][1] = 2;
    nums[1][0] = 3;
    nums[1][1] = 4;

    new_nums =  solution.matrixReshape(nums, 1, 4);

    for (int i = 0; i < 4; ++i)
        cout << new_nums[0][i] << endl;

    return 0;
}