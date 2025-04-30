/*
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,mc=0;
      for(int i=0;i<nums.size();i++)
      {
        if(nums[i]==1)
        {
            c++;
            mc=max(c,mc);
        }
        else c=0;
      } 
      return mc; 
    }
};
*/

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/