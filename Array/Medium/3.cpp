/*
class Solution {
public:
//OPTIMAL 
    int majorityElement(vector<int>& nums) {
        int c=0,ele;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                ele=nums[i];
                c=1;
            }
            else if(nums[i]==ele) c++;
            else c--;//equal nahi hai          

        }
        return ele;
    }
};
*/

//https://leetcode.com/problems/majority-element/