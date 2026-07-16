class Solution {
   public:
    int calPoints(vector<string>& operations) {
        int len = operations.size();
        int result = 0;
        vector<int> record;

        for (int i = 0; i < len; i++) {
            if (operations[i] == "+") {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            } else if (operations[i] == "D") {
                record.push_back(record.back() * 2);
            } else if (operations[i] == "C") {
                record.pop_back();
            } else {
                record.push_back(stoi(operations[i]));
            }
        }

        for (int i = 0; i < record.size(); i++) {
            result = result + record[i];
        }

        return result;

        // [1,2,3,4,5]
        // [1,2,3]
        // 4 + 5
    }
};