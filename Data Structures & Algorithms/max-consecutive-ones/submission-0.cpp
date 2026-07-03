class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sequence = 0;

        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1){
                counter++;
            } else {
                sequence = max(sequence, counter);
                counter = 0;
            }
        }

        sequence = max(sequence, counter);

        return sequence;

    }
};