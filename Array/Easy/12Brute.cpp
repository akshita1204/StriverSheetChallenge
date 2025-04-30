/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int ele=nums[i];
            int c=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==ele) c++;
            }
            if(c==1) return ele;
        }
        return -1;
    }
};
*/
/*
Time=>O(n^2)
Space=>O(1)
*/