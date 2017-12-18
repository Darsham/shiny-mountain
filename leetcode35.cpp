class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=0;
        int n=nums.size();
        
        if(nums[n-1]<target)
        {
            ans=n;
        }
        else
        {
            for(int i=0;nums[i]<target;i++)
            {
                ans++;
            }
        }
        return ans;
    }
};
