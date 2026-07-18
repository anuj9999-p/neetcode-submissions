class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char,int> count;
        int res=0;
        int i=0,maxf=0;
        for(int r=0;r<s.size();r++){
            count[s[r]]++;
            maxf=max(maxf,count[s[r]]);
            while((r-i+1)-maxf > k){
                count[s[i]]--;
                i++;
            }
            res=max(res,r-i+1);
        }
        return res;
    }
};
