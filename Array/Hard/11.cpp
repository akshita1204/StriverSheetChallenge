///https://leetcode.com/problems/reverse-pairs/
/*class Solution {
public:

void merge(vector<int>&nums,int low,int mid,int high,int&c)
{
    int j=mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(j<=high and nums[i]>2*(long long)nums[j]) j++;
        c=c+j-(mid+1);
    }
    int size=high-low+1;
    vector<int>t(size,0);
    int left=low,right=mid+1,k=0;
    while(left<=mid and right<=high)
    {
        if(nums[left]<nums[right]) 
        {
            t[k]=nums[left];
            k++;
            left++;
        }
        else
        {
          t[k]=nums[right];
          right++;
          k++;
        }     
    }
while(left<=mid)
    {
 t[k]=nums[left];
 k++;
 left++;
    }
while(right<=high)
    {
        t[k]=nums[right];
        k++;
        right++;
    }
int m=0;
for(int i=low;i<=high;i++)
{
    nums[i]=t[m++];
}
}
void mergesort(vector<int>&nums,int low,int high,int &rc)
{
    if(low>=high) return;
    int mid=(low+high)>>1;
    mergesort(nums,low,mid,rc);
    mergesort(nums,mid+1,high,rc);
    merge(nums,low,mid,high,rc);
}

    int reversePairs(vector<int>& nums) {
       int rc=0;
       mergesort(nums,0,nums.size()-1,rc);
       return rc; 
    }
};*/