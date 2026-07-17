class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxlen=0;
        int freq[256]={0};
        while(j<s.size()){
            while(freq[s[j]]>0){
                freq[s[i]]--;
                i++;
            }if(freq[s[j]]==0){
                freq[s[j]]++;
            }
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};
