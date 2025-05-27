/*class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int pre=0,c=0;
        unordered_map<int,int>mp;
        mp[0]=1;

        for(int i=0;i<n;i++)
        {
            pre+=nums[i];
            int rem=pre-k;
            if(mp.find(rem)!=mp.end()) c+=mp[rem];
            mp[pre]++;
        }
       return c;
    }
};*/
//https://leetcode.com/problems/subarray-sum-equals-k/