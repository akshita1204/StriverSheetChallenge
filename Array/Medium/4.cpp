/*

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsum=INT_MIN;
       int cs=0; //current sum
       for(int i=0;i<nums.size();i++)
       {
        cs+=nums[i];
        if(cs>maxsum) maxsum=cs;
        if(cs<0) cs=0;
       }
       return maxsum;  
    }
   
};
*/