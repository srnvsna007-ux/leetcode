class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> res(n);

        int h = 0;
        int t = n - 1;

        for (int j = n - 1; j >= 0; j--) {

            if (abs(nums[h]) > abs(nums[t])) {
                res[j] = nums[h] * nums[h];
                h++;
            } else {
                res[j] = nums[t] * nums[t];
                t--;
            }
        }

        return res;
    }
};
