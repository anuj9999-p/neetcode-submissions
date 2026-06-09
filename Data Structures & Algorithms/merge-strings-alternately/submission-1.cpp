class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        int i=0;
        int j=0;
        string newstr;
        while(i<n ||j<m){
            if(i<n) newstr+= word1[i++];
            if(j<m) newstr+= word2[j++];
        }
        return newstr;
    }

};