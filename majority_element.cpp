// TC: O(N)
// MC: O(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int localWinner = 0;
        int winnerVoteCount = 0;
        for (int num : nums) {
            if (winnerVoteCount == 0) localWinner = num;
            if (localWinner == num) winnerVoteCount++;
            else winnerVoteCount--;
        }
        return localWinner;
    }
};
