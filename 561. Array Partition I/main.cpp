#include <iostream>
#include "solution.h"

int main() {
    Solution solution;
    vector<int> nums = {1, 4, 3, 2};
    std::cout << solution.arrayPairSum(nums) << std::endl;
    return 0;
}