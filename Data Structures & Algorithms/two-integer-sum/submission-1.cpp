class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> order;

        for (int i = 0; i < nums.size(); i++) {
            int y = target - nums[i];
            if (order.contains(y)) {
                return {order[y] , i};
            }
            order[nums[i]] = i;
        }

        return {};
    }
};
