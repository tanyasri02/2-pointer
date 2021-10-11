// variation of 4 sum problem
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int target=0;
        
        for(int i=0;i<n;i++)
        {
            int left=i+1;
            int right=n-1;
            
            int target2=0-nums[i];
            
            while(left<right)
            {
                int rem_sum=nums[left]+nums[right];
                
                if(rem_sum>target2)
                    right--;
                else if(rem_sum<target2)
                    left++;
                else
                {
                    vector<int>temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[left];
                    temp[2]=nums[right];
                    ans.push_back(temp);
                    
                    while(left<right && nums[left]==temp[1])
                        left++;
                    while(left<right && nums[right]==temp[2])
                        right--;
                }
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;
        }
        return ans;
    }
};
