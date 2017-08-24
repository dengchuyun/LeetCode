#ifndef INC_485_MAX_CONSECUTIVE_ONES_SOLUTION_H
#define INC_485_MAX_CONSECUTIVE_ONES_SOLUTION_H

#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0, tmp_count = 0;
        size_t nums_size = nums.size();

        for (int i = 0; i < nums_size; ++i) {
            if (nums[i] == 0) {
                if (tmp_count > max_count)
                    max_count = tmp_count;
                tmp_count = 0;
            }
            else
                ++tmp_count;
        }

        if (tmp_count > max_count)
            max_count = tmp_count;

        return max_count;
    }
};

#endif //INC_485_MAX_CONSECUTIVE_ONES_SOLUTION_H
