class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> fr;
        int maxF=0;
        for(int n:nums){
            fr[n]++;
            maxF=max(maxF,fr[n]);
        }
        int tf=0;
        for(auto & [n,freq]:fr){
            if(freq==maxF){
                tf+=freq;
            }
        }
        return tf;
        
    }
};