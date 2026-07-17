class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hmap;

        int len = nums.size();


        for (int i = 0; i < len; i++) {
            int y = target - nums[i];
            if (hmap.contains(y)) {
                return {hmap[y] , i};
            }
            hmap[nums[i]] = i;
        }

        // brute force
        // for (int i = 0; i < len; i++) {
        //     for (int j = i + 1; j < len; j++ ) {
        //         if ((nums[i] + nums[j]) == target) {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //         }
        //     }
        // }

        return {};

    }
};
