class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_map<int,int>seen;
        
        for(int i : arr){
            freq[i]++;                       
        }
        
        for(const auto& [key, val]:freq){
            if(++seen[val]>1)return false;
        }
        return true;
        
    }
};