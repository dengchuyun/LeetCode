//
// Created by 邓楚云 on 2017/8/19.
//

#ifndef INC_561_ARRAY_PARTITION_I_SOLUTION_H
#define INC_561_ARRAY_PARTITION_I_SOLUTION_H

#include <vector>
using std::vector;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        size_t arrayLength = nums.size();

        sort(nums.begin(), nums.end());
        for (int i = 0; i < arrayLength; i += 2) sum += nums[i];

        return sum;
    }
};

#endif //INC_561_ARRAY_PARTITION_I_SOLUTION_H
