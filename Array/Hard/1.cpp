//https://leetcode.com/problems/majority-element-ii/description/

/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

       int n=nums.size();
       int c1=0,c2=0,ele1,ele2;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==ele1)
        {
            c1++;
        }
        else if(nums[i]==ele2)
        {
            c2++;
        }
        else if(c1==0)
        {
            ele1=nums[i];
            c1=1;   
        }
        else if(c2==0)
        {
            ele2=nums[i];
            c2=1;
        }
        else
        {
            c1--;
            c2--;
        }
       } 
       
       vector<int>ans;
       int f1=0,f2=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]==ele1) f1++;
        else if(nums[i]==ele2) f2++;
       }
       if(f1>floor(n/3)) ans.push_back(ele1);
       if(f2>floor(n/3)) ans.push_back(ele2);
       return ans;
    }
};

*/

/*
Time=> O(n)
Space=> O(1)
*/