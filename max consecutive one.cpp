class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0,temp=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                temp++;
            else
                temp=0;
            mx=max(temp,mx);
        }
        return mx;
    }
};
