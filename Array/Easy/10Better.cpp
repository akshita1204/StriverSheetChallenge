
/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>mp(n+1,0);
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(int i=0;i<=n;i++)
        {
            if(mp[i]==0) return i;
        }
        return -1;
    }
};
*/

/*
Time Complexity: O(2N)
Space Complexity: O(n)
*/