class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int e=n*(n+1)/2;
        int s=0;
        for(int num:nums){
            s+=num;
        }
        return e-s;
        
    }
};