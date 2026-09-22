class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i!=0&&nums[i]==nums[i-1])continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1&&nums[j]==nums[j-1])continue;
                long long Target=(long long)target-nums[i]-nums[j];
                int left=j+1;
                int right=n-1;
                while(left<right){
                    if(nums[left]+nums[right]==Target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                        int temp1=nums[left];
                        int temp2=nums[right];
                        while(left<right&&temp1==nums[left])left++;
                        while(left<right&&temp2==nums[right])right--;

                    }
                    else if(nums[left]+nums[right]<Target&&left<right) {
                        left++;
                    }
                    else right--;
                }

            }
        }
        return ans;
    }
};