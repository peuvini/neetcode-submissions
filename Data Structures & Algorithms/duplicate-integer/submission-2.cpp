class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> order;
        for (int i = 0; i < nums.size(); i++){
            if (++order[nums[i]] > 1) return true;
        }
        return false;
    }

};