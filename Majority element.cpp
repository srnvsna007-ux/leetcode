class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a =0;//count 
        int b =0;//count of number
        for(int i =0;i<nums.size();i++)//update
        {
            if(a==0)
            {
                b=nums[i];
            }
            if(nums[i]==b)
            {
                a++;
            }
            else
            {
                a--;
            }
        }
        return b;
    }
};
