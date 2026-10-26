class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>ans;
        int index=0;
        for(int x:nums){
            ans[x]=index;
            index++;
        }
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            if(ans.count(rem)&&ans[rem]!=i){
                return {i,ans[rem]};
            } 
        }
        return {};
    }

};
