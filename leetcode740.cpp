class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int avoid = 0;
        int useing = 0;
        int prev = -1;

        int count[10001];
        for(int i=0;i<10001;i++)
        {
            count[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        
        
        for(int k = 0; k<10001;k++)
        {
            if(count[k]>0)
            {
                int m=0;
                if(avoid>useing)
                {
                    m=avoid;
                }
                else
                    m=useing;
                
                if(k-1!=prev)
                {
                    useing = k * count[k] + m;
                    avoid = m;
                }
                else
                {
                    useing = k * count[k] + avoid;
                    avoid = m;
                }
                prev = k;
            }
        }
        
        int ans=0;
        if(avoid>useing)
                {
                    ans=avoid;
                }
                else
                    ans=useing;
        return ans;
    }
};


