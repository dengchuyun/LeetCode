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
        bool add_flag = true;
        vector<int> hashtable(20001, 0);
        size_t array_size = nums.size();

        for (size_t i = 0; i < array_size; i++) hashtable[10000+nums[i]]++;

        for (size_t i = 0; i < 20001; i++) {
            while (hashtable[i] > 0) {
                if (add_flag) sum += i - 10000;
                add_flag = !add_flag;
                hashtable[i]--;
            }
        }

        return sum;
    }
};
#endif //INC_561_ARRAY_PARTITION_I_SOLUTION_H
