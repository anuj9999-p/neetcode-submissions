class Solution {
public:
    bool isPalindrome(string s) {
        
        string newstring="";
        for(char ch:s){
            if(isalnum(ch)){
                newstring += tolower(ch);
            }
        }
        return newstring== string(newstring.rbegin(),newstring.rend());
    }
};
