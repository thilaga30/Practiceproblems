class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int ,int>freq;
        for(int x:arr){
            freq[x]++;
        }
        int maxfreq=-1;
        for(auto const it:freq){
            if(it.first==it.second){
                maxfreq=max(it.first,maxfreq);
                
            }
        }
        return maxfreq;
    }
};