class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> order;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (order.count(complement)) {
                return {order[complement] , i};
            }
            order[nums[i]] = i;
        }

        return {};
    }
};
