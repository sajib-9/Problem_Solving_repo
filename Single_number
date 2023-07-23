// TC: O(N)
// MC: O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int missingNumber = 0;
        for(auto num : nums)
        {
            missingNumber ^= num;
        }
        return missingNumber;
    }
};
