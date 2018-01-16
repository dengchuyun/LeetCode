#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0, tmp_count = 0;
        size_t nums_size = nums.size();

        for (int i = 0; i < nums_size; ++i) {
            if (nums[i] == 0)
                tmp_count = 0;
            else
                max_count = max(++tmp_count, max_count);
        }

        return max_count;
    }
};
