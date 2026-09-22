class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans; 
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i!=0&&nums[i]==nums[i-1])continue;
            int Target = 0-nums[i];
            int left=i+1;
            int right=n-1;
            while(left<right){
                if(nums[left]+nums[right]==Target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    int temp1=nums[left];
                    int temp2=nums[right];
                    while(temp1==nums[left]&&left<right){
                        left++;
                    }
                    while(temp2==nums[right]&&left<right){
                        right--;
                    }
                }
                else if(nums[left]+nums[right]<Target){
                    left++;
                }
                else{
                    right--;
                }
            }
        } 
        return ans;
    }
};
