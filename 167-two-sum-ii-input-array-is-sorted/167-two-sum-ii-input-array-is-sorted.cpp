class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>v;
        int i = 0, j = n-1;
        while(i<=j){
            if(nums[i]+nums[j] == target){
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
            else if(nums[i]+nums[j] < target)
                i++;
            else if(nums[i]+nums[j] > target)
                j--;
        }
        return v;
    }
};