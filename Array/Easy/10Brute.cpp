/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=1;i<=nums.size();i++)
        {
            int flag=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) return i;
        }
        return -1;
    }
};

*/

/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/