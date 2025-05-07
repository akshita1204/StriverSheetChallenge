 /*
 
 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     sort(nums.begin(),nums.end());
     vector<vector<int>>ans;
     for(int i=0;i<n;i++)
     {
        if(i>0 and nums[i]==nums[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int s=nums[i]+nums[j]+nums[k];
            if(s<0) j++;
            else if(s>0) k--;
            else 
            {
                vector<int>t={nums[i],nums[j],nums[k]};
                ans.push_back(t);
                j++;
                k--;
                while(j<k and nums[j]==nums[j-1]) j++;
                while(j<k and nums[k]==nums[k+1]) k--;
            }
        }
     } 
     return ans;  
    }
};
 */

//https://leetcode.com/problems/3sum/