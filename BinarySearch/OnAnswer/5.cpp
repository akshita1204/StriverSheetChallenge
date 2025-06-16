// /https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
/*class Solution {
public:

int fmax(vector<int>& nums)
{
    int ans=INT_MIN;
    for(int i=0;i<nums.size();i++)
    {
        ans=max(ans,nums[i]);
    }
    return ans;
}
bool f(vector<int>& nums, int t,int v)
{
int c=0;
for(int i=0;i<nums.size();i++)
{
    c+=ceil((double)nums[i]/(double)v);
}
if(c<=t) return true;
else return false;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
       int n=nums.size();
       int low=1;
       int high=fmax(nums);
       int ans;
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(f(nums,threshold,mid)==true)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       } 
       return ans;
    }
};*/