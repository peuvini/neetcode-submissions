class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
            
            int capacity = nums.size();
            vector<int> ans(capacity*2);
            for (int i = 0; i < capacity; i++){
                ans[i] = nums[i];
                ans[i+capacity] = ans[i];
            }
            
            return ans;

    }
};