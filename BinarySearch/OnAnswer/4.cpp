//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
/*class Solution {
public:
bool f(vector<int>& bloomDay, int m, int k,int day)
{   int n=bloomDay.size();
    long long int nofb=0; //no of booques
    long long int c=0;
    for(int i=0;i<n;i++)
    {
        if(bloomDay[i]<=day) c++;
        else c=0; 

        if(c==k)
        {
            nofb++;
            c=0;
        }  
    }
    return nofb>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val=(long long )m*(long long)k;
        if(n<val) return -1;
        int ans;
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high)
        {
        int mid=(low+high)/2;
        if(f(bloomDay,m,k,mid)==true) 
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
       } 
       return ans;
    }
};*/